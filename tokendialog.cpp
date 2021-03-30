#include "tokendialog.h"
#include <iostream>
#include "ui_connectiondialog.h"
TokenDialog::TokenDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TokenDialog)
{
    std::cout<<"constructed tokendialog"<<std::endl;

    ui->setupUi(this);

}
TokenDialog::~TokenDialog(){
    std::cout<<"Destroyed tokendialog"<<std::endl;
    delete ui;
}
