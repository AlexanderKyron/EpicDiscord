#ifndef TOKENDIALOG_H
#define TOKENDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class TokenDialog; }
QT_END_NAMESPACE
class TokenDialog : public QDialog
{
    Q_OBJECT
public:
    TokenDialog(QWidget *parent = nullptr);
    ~TokenDialog();
private:
    Ui::TokenDialog *ui;
};
#endif // TOKENDIALOG_H
