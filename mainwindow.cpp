#include "mainwindow.h"
#include "accountmanager.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tb = ui->tabWidget;
   // tb->tabBar()->setStyleSheet("color:black;background-color:rgb(0,0,0);");
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
