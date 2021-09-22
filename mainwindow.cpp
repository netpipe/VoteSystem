#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>
#include <QSqlQuery>
#include <QDebug>
#include <QDir>
#include <QTimer>
#include <QSound>
#include <downloadmanager.h>

QString mediadir = "./Resource/";


//todo - unique user id and gereation system for assigning and casting votes
//smtp and ftp support
//


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap oPixmap(32,32);
    oPixmap.load ( mediadir + "meatTracker.png");

    QIcon oIcon( oPixmap );

    trayIcon = new QSystemTrayIcon(oIcon);

    QAction *quit_action = new QAction( "Exit", trayIcon );
    connect( quit_action, SIGNAL(triggered()), this, SLOT(on_exit()) );

    trayIconMenu = new QMenu(this);
    trayIconMenu->addAction( quit_action );

    trayIcon->setContextMenu( trayIconMenu);
    trayIcon->setVisible(true);
    //trayIcon->showMessage("Test Message", "Text", QSystemTrayIcon::Information, 1000);
    //trayIcon->show();


    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));

 //   ui->timeCountProgress->setRange(0, int(timerPeriod.toFloat() * 60));
 //   ui->timeCountProgress->setValue(0);
Animals Saved
    //QTimer *timer = new QTimer(this);
    //connect(timer, SIGNAL(timeout()), this, SLOT(updateCheck()));
    //timer->start(int(timerPeriod.toFloat() * 60) * 1000); // int(timerPeriod) * 60 * 1000

    QTimer *timerClock = new QTimer(this);
 //   connect(timerClock,SIGNAL(timeout()), this, SLOT(showTime()));
 //   timerClock->start(1000);


    //Apply style
    QFile stylesheet("./Resource/themes/qdarkstyle/qdarkstyle.qss");
    stylesheet.open(QFile::ReadOnly);
    this->setStyleSheet(stylesheet.readAll());
    stylesheet.close();


    QDate dNow(QDate::currentDate());
    qDebug() << "Today is" << dNow.toString("dd.MM.yyyy");

    QTime time = QTime::currentTime();
   QString text = time.toString("hh:mm");

   //dNow.daysTo(maturedate);

       showMessage();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Alert(){

     QSound::play( mediadir + "sounds/ec2_mono.ogg");

}

void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason)
    {
     case QSystemTrayIcon::Trigger:
         this->show();
         break;
     case QSystemTrayIcon::DoubleClick:
         this->show();
         break;
     case QSystemTrayIcon::MiddleClick:
      //  showMessage();
        break;

     default:
         ;
    }
}

void MainWindow::showMessage()
{
    QSystemTrayIcon::MessageIcon icon = QSystemTrayIcon::MessageIcon();
    trayIcon->showMessage(tr("MeatTracker"), tr("Meat Timer..."), icon, 100);
        trayIcon->showMessage(tr("MeatTracker"), tr("Meat Timer..."), icon, 100);
            trayIcon->showMessage("MeatTracker", "Meat Timer...", icon, 1000);

       //     zenity --info --title "Hello" --text "World" --timeout=2
       //             xmessage 'hello world'

    Alert();
}


void MainWindow::on_actionExit_triggered()
{
    this->close();
    QApplication::quit();
}


void MainWindow::on_exit()
{
    this->close();
    QApplication::quit();
}


void MainWindow::SaveSettings(){

        QSettings settings(QDir::currentPath() + "/ftp.ini", QSettings::IniFormat);
      //  ui->lineEditPort->setText(settings.value("settings/port", defaultPort).toString());

}

void MainWindow::loadSettings(){

    QSettings settings(QDir::currentPath() + "/ftp.ini", QSettings::IniFormat);
  //  settings.setValue("settings/port", ui->lineEditPort->text());
}


void MainWindow::createNewsTable(){

    db.setDatabaseName("./news.sqlite");

    if(db.open())    {       qDebug()<<"Successful database connection";    }
    else    {       qDebug()<<"Error: failed database connection";    }

    QString query;

   // qDebug() << "test" << eownerID.toLatin1();

    query.append("CREATE TABLE IF NOT EXISTS news("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "origindex VARCHAR(100)," //rcoins index then coins.sqlite is stored on usbdrive as part of key/verify
                    "addr VARCHAR(100),"
                    "datetime INTEGER,"
                    "class INTEGER,"
                    "hold INTEGER"
                    ");");


    QSqlQuery create;
    create.prepare(query);

    if (create.exec())
    {
        qDebug()<<"Table exists or has been created";
    }
    else
    {
        qDebug()<<"Table not exists or has not been created";
  //      qDebug()<<"ERROR! "<< create.lastError();
    }
    query.clear();
    db.close();

}

void MainWindow::on_save_clicked()
{
       showMessage();
}
