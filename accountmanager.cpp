#include "accountmanager.h"
#include "tokendialog.h"
#include <iostream>
#include "ui_accountmanager.h"
#include "QtSql/qsqltablemodel.h"
#include "QtSql/qsqlrecord.h"
#include "QtSql/qsqlquery.h"
AccountManager::AccountManager(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AccountManagerDialog)
{
    ui->setupUi(this);
    m_parent = parent;
    m_userdb = QSqlDatabase::addDatabase("QSQLITE");
    m_userdb.setDatabaseName("users.db");
    if(!m_userdb.open()) {
        std::cout<<"ERROR CANT OPEN DB" <<std::endl;
    }
    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY AUTOINCREMENT, name varchar(20), token varchar(255), bot INTEGER)");
    m_model = new QSqlTableModel(this,m_userdb);
    m_model->setTable("users");
    //QSqlRecord r = model.record(0);
    m_model->select();
    ui->tableView->setModel(m_model);
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->show();

}
AccountManager::~AccountManager(){
    std::cout<<"Destroyed accountmaanger"<<std::endl;
    delete m_model;
    delete ui;
}

void AccountManager::on_AddButton_clicked()
{
    std::cout<<"Pressed add account button"<<std::endl;
    TokenDialog tokenDialog(this);
    tokenDialog.exec();
}

void AccountManager::UpdateModel()
{
    m_model->select();
    ui->tableView->show();
}

void AccountManager::on_DeleteButton_clicked()
{
    if(m_model) {
        QModelIndexList indexList = ui->tableView->selectionModel()->selectedRows();
        for (int i = 0; i < indexList.count(); ++i)
        {
            QModelIndex index = indexList.at(i);
            m_model->removeRow(index.row());
         }
        UpdateModel();
    }
}
