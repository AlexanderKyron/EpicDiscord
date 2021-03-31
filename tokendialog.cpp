#include "tokendialog.h"
#include <iostream>
#include "ui_connectiondialog.h"
#include "qfile.h"
#include "qtextstream.h"
#include "qdebug.h"
#include "QtSql/QSql"
#include "QtSql/QSqlDatabase"
#include "accountmanager.h"
#include "QtSql/QSqlQuery"
#include "qmessagebox.h"

#include "QtSql/qsqlerror.h"
TokenDialog::TokenDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TokenDialog)
{
    std::cout<<"constructed tokendialog"<<std::endl;

    ui->setupUi(this);
    m_accountManager = (AccountManager*)parent;
}
TokenDialog::~TokenDialog(){
    std::cout<<"Destroyed tokendialog"<<std::endl;
    delete ui;
}

//Is Bot checkbox
void TokenDialog::on_checkBox_2_stateChanged(int arg1)
{

}

void TokenDialog::on_buttons_accepted()
{
    QString token = ui->tokenBox->text();
    QString name = ui->nameBox->text();
    bool isBot = ui->checkBox_2->isChecked();
    std::cout<<"Got token and refname"<<std::endl;
     QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
     db.setDatabaseName("users.db");
     if (!db.open()) {
            QMessageBox::critical(nullptr, QObject::tr("Cannot open database"),
                QObject::tr("Unable to establish a database connection.\n"
                            "This example needs SQLite support. Please read "
                            "the Qt SQL driver documentation for information how "
                            "to build it.\n\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
     } else {
        QSqlQuery query;
        query.exec("CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY AUTOINCREMENT, name varchar(20), token varchar(255), bot INTEGER)");
        query.prepare("INSERT INTO users(\"id\",\"name\",\"token\",\"bot\") VALUES (NULL,:name,:token,:bot);");
        query.bindValue(":name",name);
        query.bindValue(":token",token);
        query.bindValue(":bot",isBot);
        query.exec();
        std::cout<<query.lastError().text().toStdString()<<std::endl;
     }
     m_accountManager->UpdateModel();
     close();
}
