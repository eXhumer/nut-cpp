#include "appwidgets/mainwindow.h"

#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTranslator translator;
    app.setApplicationName("NUT");
    app.setApplicationVersion("0.0.1");
    app.setWindowIcon(QIcon(":/images/logo.jpg"));
    if(translator.load(QLocale(), app.applicationName(), ".", QString(), ".qm"))
        app.installTranslator(&translator);
    MainWindow win;
    win.show();
    return app.exec();
}
