#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QThread>
#include <QFile>
#include <QMessageBox>

QString mediadir2 = "./Resource/";
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile styleFile(":/Resource/themes/qdarkstyle/qdarkstyle.qss");
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    a.setStyleSheet(styleSheet);

    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/Resource/meatTracker.png"));
    splash->show();

    if (!QSystemTrayIcon::isSystemTrayAvailable()) {
        QMessageBox::critical(nullptr, QObject::tr("Systray"),
                              QObject::tr("I couldn't detect any system tray "
                                          "on this system."));
        return 1;
    }
    QApplication::setQuitOnLastWindowClosed(false);

    MainWindow w;

    QThread::msleep(1000);

    w.setWindowFlags( Qt::Dialog  | Qt::MSWindowsFixedSizeDialogHint);

    w.show();

    splash->finish(&w);
    delete splash;

    return a.exec();
}
