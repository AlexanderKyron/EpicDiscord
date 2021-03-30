#include "accountmanager.h"
#include "tokendialog.h"
#include <iostream>
#include "ui_accountmanager.h"
AccountManager::AccountManager(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AccountManagerDialog)
{
    ui->setupUi(this);
    m_parent = parent;

}
AccountManager::~AccountManager(){
    std::cout<<"Destroyed accountmaanger"<<std::endl;
    delete ui;
}

void AccountManager::on_AddButton_clicked()
{
    std::cout<<"Pressed add account button"<<std::endl;
    TokenDialog tokenDialog(this);
    tokenDialog.exec();
}
