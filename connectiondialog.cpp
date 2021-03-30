#include "connectiondialog.h"
#include <iostream>
#include "ui_connectiondialog.h"
ConnectionDialog::ConnectionDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

}
ConnectionDialog::~ConnectionDialog(){
    std::cout<<"Destroyed connectionDialog"<<std::endl;
    delete ui;
}
