#include "accountmanager.h"
#include <iostream>
#include "ui_accountmanager.h"
AccountManager::AccountManager(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AccountManagerDialog)
{
    ui->setupUi(this);

}
AccountManager::~AccountManager(){
    std::cout<<"Destroyed accountmaanger"<<std::endl;
    delete ui;
}
