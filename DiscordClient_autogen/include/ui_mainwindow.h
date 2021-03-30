/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_chat_to_file;
    QAction *actionBegin_recording;
    QAction *actionExit;
    QAction *actionVisual_scripting;
    QAction *actionCode_editor;
    QAction *actionEnable_for_this_chat;
    QAction *actionShow_current_keys;
    QAction *actionText_to_Speech_engine;
    QAction *actionVoice_changer_settings;
    QAction *actionPlay_audio_from_file;
    QAction *actionSet_Keys;
    QAction *actionRich_Message_Formatter;
    QAction *actionTranslator;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionSave_Chat;
    QAction *actionRecorder;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuAutomator;
    QMenu *menuEncryption;
    QMenu *menuCalls;
    QMenu *menuMessaging;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *listView;
    QLabel *label_2;
    QListView *listView1;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_2;
    QTreeView *treeView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1169, 651);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(120, 120, 120);\n"
"QTabBar::tab{\n"
"background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"}"));
        actionSave_chat_to_file = new QAction(MainWindow);
        actionSave_chat_to_file->setObjectName(QString::fromUtf8("actionSave_chat_to_file"));
        actionBegin_recording = new QAction(MainWindow);
        actionBegin_recording->setObjectName(QString::fromUtf8("actionBegin_recording"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionVisual_scripting = new QAction(MainWindow);
        actionVisual_scripting->setObjectName(QString::fromUtf8("actionVisual_scripting"));
        actionCode_editor = new QAction(MainWindow);
        actionCode_editor->setObjectName(QString::fromUtf8("actionCode_editor"));
        actionEnable_for_this_chat = new QAction(MainWindow);
        actionEnable_for_this_chat->setObjectName(QString::fromUtf8("actionEnable_for_this_chat"));
        actionShow_current_keys = new QAction(MainWindow);
        actionShow_current_keys->setObjectName(QString::fromUtf8("actionShow_current_keys"));
        actionText_to_Speech_engine = new QAction(MainWindow);
        actionText_to_Speech_engine->setObjectName(QString::fromUtf8("actionText_to_Speech_engine"));
        actionVoice_changer_settings = new QAction(MainWindow);
        actionVoice_changer_settings->setObjectName(QString::fromUtf8("actionVoice_changer_settings"));
        actionPlay_audio_from_file = new QAction(MainWindow);
        actionPlay_audio_from_file->setObjectName(QString::fromUtf8("actionPlay_audio_from_file"));
        actionSet_Keys = new QAction(MainWindow);
        actionSet_Keys->setObjectName(QString::fromUtf8("actionSet_Keys"));
        actionRich_Message_Formatter = new QAction(MainWindow);
        actionRich_Message_Formatter->setObjectName(QString::fromUtf8("actionRich_Message_Formatter"));
        actionTranslator = new QAction(MainWindow);
        actionTranslator->setObjectName(QString::fromUtf8("actionTranslator"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionSave_Chat = new QAction(MainWindow);
        actionSave_Chat->setObjectName(QString::fromUtf8("actionSave_Chat"));
        actionRecorder = new QAction(MainWindow);
        actionRecorder->setObjectName(QString::fromUtf8("actionRecorder"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(90, 90, 90, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        tabWidget->setPalette(palette);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:rgb(90, 90, 90);"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1169, 21));
        menubar->setStyleSheet(QString::fromUtf8("color:white;"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuAutomator = new QMenu(menuTools);
        menuAutomator->setObjectName(QString::fromUtf8("menuAutomator"));
        menuEncryption = new QMenu(menuTools);
        menuEncryption->setObjectName(QString::fromUtf8("menuEncryption"));
        menuCalls = new QMenu(menuTools);
        menuCalls->setObjectName(QString::fromUtf8("menuCalls"));
        menuMessaging = new QMenu(menuTools);
        menuMessaging->setObjectName(QString::fromUtf8("menuMessaging"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:rgb(90, 90, 90)"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        listView = new QListView(dockWidgetContents);
        listView->setObjectName(QString::fromUtf8("listView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);
        listView->setStyleSheet(QString::fromUtf8("background-color:rgb(70, 70, 70);color:white;"));
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listView->setModelColumn(0);

        verticalLayout->addWidget(listView);

        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        listView1 = new QListView(dockWidgetContents);
        listView1->setObjectName(QString::fromUtf8("listView1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listView1->sizePolicy().hasHeightForWidth());
        listView1->setSizePolicy(sizePolicy1);
        listView1->setStyleSheet(QString::fromUtf8("background-color:rgb(70, 70, 70);color:white;\n"
""));
        listView1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout->addWidget(listView1);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidget_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:rgb(90, 90, 90)"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        gridLayout_2 = new QGridLayout(dockWidgetContents_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        treeView = new QTreeView(dockWidgetContents_2);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setStyleSheet(QString::fromUtf8("background-color:rgb(70, 70, 70);color:white;"));

        gridLayout_2->addWidget(treeView, 0, 0, 1, 1);

        dockWidget_2->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidget_2);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTools->menuAction());
        menuFile->addAction(actionExit);
        menuTools->addAction(menuAutomator->menuAction());
        menuTools->addAction(menuEncryption->menuAction());
        menuTools->addAction(menuCalls->menuAction());
        menuTools->addAction(menuMessaging->menuAction());
        menuAutomator->addAction(actionVisual_scripting);
        menuAutomator->addAction(actionCode_editor);
        menuEncryption->addAction(actionEnable_for_this_chat);
        menuEncryption->addAction(actionShow_current_keys);
        menuEncryption->addAction(actionSet_Keys);
        menuCalls->addAction(actionRecorder);
        menuCalls->addAction(actionText_to_Speech_engine);
        menuCalls->addAction(actionVoice_changer_settings);
        menuCalls->addAction(actionPlay_audio_from_file);
        menuMessaging->addAction(actionSave_Chat);
        menuMessaging->addAction(actionRich_Message_Formatter);
        menuMessaging->addAction(actionTranslator);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave_chat_to_file->setText(QCoreApplication::translate("MainWindow", "Save chat to file", nullptr));
        actionBegin_recording->setText(QCoreApplication::translate("MainWindow", "Begin recording", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionVisual_scripting->setText(QCoreApplication::translate("MainWindow", "Visual scripting", nullptr));
        actionCode_editor->setText(QCoreApplication::translate("MainWindow", "Code editor", nullptr));
        actionEnable_for_this_chat->setText(QCoreApplication::translate("MainWindow", "Enable for this chat", nullptr));
        actionShow_current_keys->setText(QCoreApplication::translate("MainWindow", "Show current keys", nullptr));
        actionText_to_Speech_engine->setText(QCoreApplication::translate("MainWindow", "Text to Speech engine", nullptr));
        actionVoice_changer_settings->setText(QCoreApplication::translate("MainWindow", "Voice changer settings", nullptr));
        actionPlay_audio_from_file->setText(QCoreApplication::translate("MainWindow", "Play audio from file", nullptr));
        actionSet_Keys->setText(QCoreApplication::translate("MainWindow", "Set Keys", nullptr));
        actionRich_Message_Formatter->setText(QCoreApplication::translate("MainWindow", "Rich Message Formatter", nullptr));
        actionTranslator->setText(QCoreApplication::translate("MainWindow", "Auto Translation Settings", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionSave_Chat->setText(QCoreApplication::translate("MainWindow", "Save Chat", nullptr));
        actionRecorder->setText(QCoreApplication::translate("MainWindow", "Recorder", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuAutomator->setTitle(QCoreApplication::translate("MainWindow", "Automator", nullptr));
        menuEncryption->setTitle(QCoreApplication::translate("MainWindow", "Encryption", nullptr));
        menuCalls->setTitle(QCoreApplication::translate("MainWindow", "Calls", nullptr));
        menuMessaging->setTitle(QCoreApplication::translate("MainWindow", "Messaging", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        dockWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "Chats", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "DMs", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Servers and Channels", nullptr));
        dockWidget_2->setWindowTitle(QCoreApplication::translate("MainWindow", "Members", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
