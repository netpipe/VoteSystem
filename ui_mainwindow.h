/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_8;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QPushButton *webvoteup;
    QPushButton *webvotedown;
    QTextEdit *textEdit_2;
    QTableWidget *tableWidget_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_7;
    QPushButton *pictureVoteUp;
    QPushButton *pictureVoteDown;
    QPushButton *pictureInspire;
    QPushButton *pictureRandom;
    QPushButton *pictureUpload;
    QGraphicsView *graphicsView;
    QWidget *tab_9;
    QGridLayout *gridLayout_10;
    QTableWidget *tableWidget_5;
    QPushButton *pushButton;
    QWidget *tab_7;
    QGraphicsView *graphicsView_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QPushButton *edit;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QPushButton *publish;
    QLabel *label_4;
    QPushButton *save;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QPushButton *hadsome;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1195, 667);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(370, 0, 811, 601));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_8->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        webvoteup = new QPushButton(tab_2);
        webvoteup->setObjectName(QStringLiteral("webvoteup"));

        gridLayout_2->addWidget(webvoteup, 2, 0, 1, 1);

        webvotedown = new QPushButton(tab_2);
        webvotedown->setObjectName(QStringLiteral("webvotedown"));

        gridLayout_2->addWidget(webvotedown, 2, 1, 1, 1);

        textEdit_2 = new QTextEdit(tab_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        gridLayout_2->addWidget(textEdit_2, 1, 0, 1, 2);

        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));

        gridLayout_2->addWidget(tableWidget_2, 0, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_7 = new QGridLayout(tab_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pictureVoteUp = new QPushButton(tab_3);
        pictureVoteUp->setObjectName(QStringLiteral("pictureVoteUp"));

        gridLayout_7->addWidget(pictureVoteUp, 1, 0, 1, 2);

        pictureVoteDown = new QPushButton(tab_3);
        pictureVoteDown->setObjectName(QStringLiteral("pictureVoteDown"));

        gridLayout_7->addWidget(pictureVoteDown, 1, 2, 1, 1);

        pictureInspire = new QPushButton(tab_3);
        pictureInspire->setObjectName(QStringLiteral("pictureInspire"));

        gridLayout_7->addWidget(pictureInspire, 2, 0, 1, 1);

        pictureRandom = new QPushButton(tab_3);
        pictureRandom->setObjectName(QStringLiteral("pictureRandom"));

        gridLayout_7->addWidget(pictureRandom, 2, 1, 1, 1);

        pictureUpload = new QPushButton(tab_3);
        pictureUpload->setObjectName(QStringLiteral("pictureUpload"));

        gridLayout_7->addWidget(pictureUpload, 2, 2, 1, 1);

        graphicsView = new QGraphicsView(tab_3);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout_7->addWidget(graphicsView, 0, 0, 1, 3);

        tabWidget->addTab(tab_3, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        gridLayout_10 = new QGridLayout(tab_9);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        tableWidget_5 = new QTableWidget(tab_9);
        if (tableWidget_5->columnCount() < 3)
            tableWidget_5->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        tableWidget_5->setObjectName(QStringLiteral("tableWidget_5"));

        gridLayout_10->addWidget(tableWidget_5, 0, 0, 1, 1);

        pushButton = new QPushButton(tab_9);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_10->addWidget(pushButton, 1, 0, 1, 1);

        tabWidget->addTab(tab_9, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        graphicsView_5 = new QGraphicsView(tab_7);
        graphicsView_5->setObjectName(QStringLiteral("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(110, 20, 571, 341));
        tabWidget->addTab(tab_7, QString());
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(9, 74, 361, 531));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        edit = new QPushButton(groupBox_2);
        edit->setObjectName(QStringLiteral("edit"));

        gridLayout_3->addWidget(edit, 5, 1, 1, 1);

        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_3->addWidget(textEdit, 4, 0, 1, 3);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 2, 1, 1, 2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 2);

        publish = new QPushButton(groupBox_2);
        publish->setObjectName(QStringLiteral("publish"));

        gridLayout_3->addWidget(publish, 5, 2, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 1, 0, 1, 2);

        save = new QPushButton(groupBox_2);
        save->setObjectName(QStringLiteral("save"));

        gridLayout_3->addWidget(save, 5, 0, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_3->addWidget(lineEdit_4, 1, 2, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_3->addWidget(lineEdit_3, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 2);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 9, 242, 25));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lcdNumber = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);

        hadsome = new QPushButton(centralWidget);
        hadsome->setObjectName(QStringLiteral("hadsome"));
        hadsome->setGeometry(QRect(240, 40, 121, 28));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(270, 10, 91, 26));
        progressBar->setValue(24);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1195, 24));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MeatTracker", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Your Entry's", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "New Column", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Saved", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Entry", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Your Log", Q_NULLPTR));
        webvoteup->setText(QApplication::translate("MainWindow", "VoteUp", Q_NULLPTR));
        webvotedown->setText(QApplication::translate("MainWindow", "VoteDown", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "New Column", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Saved", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Entry", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "WebStories", Q_NULLPTR));
        pictureVoteUp->setText(QApplication::translate("MainWindow", "VoteUp", Q_NULLPTR));
        pictureVoteDown->setText(QApplication::translate("MainWindow", "VoteDown", Q_NULLPTR));
        pictureInspire->setText(QApplication::translate("MainWindow", "Inspire", Q_NULLPTR));
        pictureRandom->setText(QApplication::translate("MainWindow", "Random", Q_NULLPTR));
        pictureUpload->setText(QApplication::translate("MainWindow", "Upload", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Pictures", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Title", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Entry", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "News", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "About", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Ideas", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Title", Q_NULLPTR));
        edit->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Notes On Idea", Q_NULLPTR));
        publish->setText(QApplication::translate("MainWindow", "Publish", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Estimated Animals Saved", Q_NULLPTR));
        save->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Estimated People Saved", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Estimated Time for Meeting", Q_NULLPTR));
        hadsome->setText(QApplication::translate("MainWindow", "HadSome Button", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
