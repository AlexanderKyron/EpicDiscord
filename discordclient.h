#ifndef DISCORDCLIENT_H
#define DISCORDCLIENT_H
#include <string>
#include <QJsonObject>
#include <iostream>
#include "qmessagebox.h"
#include <sleepy_discord/sleepy_discord.h>
#include <mainwindow.h>
//class MainWindow;
class DiscordClient  : public SleepyDiscord::DiscordClient
{
public:
    using SleepyDiscord::DiscordClient::DiscordClient;
    DiscordClient();
    ~DiscordClient();
public:
  //  bool SendMessage(std::string message);
  //  QJsonObject ReceiveMessage();
    MainWindow* m_mainWindow;
    static DiscordClient* instance;
    static DiscordClient* GetOrCreateClient(std::string token, bool isBot, MainWindow* mainWindow);
//s    static DiscordClient* GetOrCreateClient(std::string token, bool isBot);

    static DiscordClient* GetClient();
    static DiscordClient* CreateClient(std::string token, bool isBot, MainWindow* mainWindow);
    void onMessage(SleepyDiscord::Message message) override {
                std::cout << "Hello " + message.author.username << std::endl;
        }
    virtual void onReady(SleepyDiscord::Ready readyData) {
        if(m_mainWindow) {
            m_mainWindow->OnConnection();
        }
    }
private:
};

#endif // DISCORDCLIENT_H
