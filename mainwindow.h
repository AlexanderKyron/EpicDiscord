#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QStringListModel;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void OnConnection();
private slots:
    void on_actionConnection_Manager_triggered();

private:
    Ui::MainWindow *ui;
    QTabWidget *tb;
    QStringListModel *dmsModel;
};
#endif // MAINWINDOW_H
