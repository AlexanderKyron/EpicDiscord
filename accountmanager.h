#ifndef ACCOUNTMANAGER_H
#define ACCOUNTMANAGER_H

#include <QDialog>
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
    void on_pushButton_2_clicked();

private:
    Ui::AccountManagerDialog *ui;
};

#endif // ACCOUNTMANAGER_H
