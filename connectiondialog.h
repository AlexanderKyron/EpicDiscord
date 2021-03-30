#ifndef CONNECTIONDIALOG_H
#define CONNECTIONDIALOG_H

#include <QDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE
class ConnectionDialog : public QDialog
{
    Q_OBJECT
public:
    ConnectionDialog(QWidget *parent = nullptr);
    ~ConnectionDialog();
private:
    Ui::Dialog *ui;
};

#endif // CONNECTIONDIALOG_H
