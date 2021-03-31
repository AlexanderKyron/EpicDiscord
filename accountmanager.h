#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H

#include <QDialog>
#include "QtSql/QSqlDatabase"
class QSqlTableModel;
QT_BEGIN_NAMESPACE
namespace Ui { class AccountManagerDialog; }
QT_END_NAMESPACE
class AccountManager : public QDialog
{
    Q_OBJECT
public:
    AccountManager(QWidget *parent = nullptr);
    ~AccountManager();
private slots:

    void on_AddButton_clicked();

    void on_DeleteButton_clicked();

private:
    QWidget* m_parent;
    Ui::AccountManagerDialog *ui;
    QSqlDatabase m_userdb;
    QSqlTableModel *m_model;
public:
    void UpdateModel();
};

#endif // ACCOUNTMANAGER_H
