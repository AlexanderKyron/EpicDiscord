#include "mainwindow.h"
#include "accountmanager.h"
#include "discordclient.h"
#include "./ui_mainwindow.h"
#include "qlistview.h"
#include "qstringlistmodel.h"
#include <list>
#include "qabstractanimation.h"
#include "sleepy_discord/sleepy_discord.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tb = ui->tabWidget;
   // tb->tabBar()->setStyleSheet("color:black;background-color:rgb(0,0,0);");
    dmsModel = new QStringListModel(this);
    ui->dmsView->setModel(dmsModel);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionConnection_Manager_triggered()
{
    AccountManager accountManager(this);
    accountManager.exec();
}

void MainWindow::OnConnection() {
    std::cout<<"ONCONNECTION"<<std::endl;
    DiscordClient* client = DiscordClient::GetClient();
    SleepyDiscord::ArrayResponse<SleepyDiscord::Channel> DMChannels = client->getDirectMessageChannels();
    std::vector<SleepyDiscord::Channel> dmsList =DMChannels.vector();
    //std::sort(dmsList.begin(),dmsList.end());
    QStringList list;

    std::sort(dmsList.begin(),
              dmsList.end(),
              []( SleepyDiscord::Channel& lhs,  SleepyDiscord::Channel& rhs)
    {
        if(lhs.lastMessageID.empty()) {
            return false;
        }
        if(rhs.lastMessageID.empty()) {
            return false;
        }
        return lhs.lastMessageID.timestamp() < rhs.lastMessageID.timestamp();
    });
    std::reverse(dmsList.begin(),dmsList.end());
    for(SleepyDiscord::Channel channel : dmsList) {
        if(channel.type==SleepyDiscord::Channel::ChannelType::GROUP_DM) {
        list << QString::fromStdString(channel.name);
        std::cout<<channel.name<<std::endl;
        } else if (channel.type==SleepyDiscord::Channel::ChannelType::DM) {
            list << QString::fromStdString(channel.recipients.at(0).username);
            std::cout<<channel.recipients.at(0).username<<std::endl;
        }
    }

    dmsModel->setStringList(list);
    ui->dmsView->selectAll();

}
