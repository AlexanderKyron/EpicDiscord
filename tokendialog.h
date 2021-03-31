#ifndef TOKENDIALOG_H
#define TOKENDIALOG_H

#include <QDialog>
class AccountManager;
QT_BEGIN_NAMESPACE
namespace Ui { class TokenDialog; }
QT_END_NAMESPACE
class TokenDialog : public QDialog
{
    Q_OBJECT
public:
    TokenDialog(QWidget *parent = nullptr);
    ~TokenDialog();
private slots:
    void on_checkBox_2_stateChanged(int arg1);

    void on_buttons_accepted();

private:
    Ui::TokenDialog *ui;
    AccountManager *m_accountManager;
};
#endif // TOKENDIALOG_H
