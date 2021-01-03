#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setApplicationName("NUT");
    app.setApplicationVersion("0.0.1");
    app.setWindowIcon(QIcon(":/images/logo.jpg"));
    MainWindow win;
    win.show();
    return app.exec();
}
