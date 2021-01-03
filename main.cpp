#include "appwidgets/mainwindow.h"

#include <QCommandLineParser>
#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setApplicationName("NUT");
    app.setApplicationVersion("0.0.1");
    app.setWindowIcon(QIcon(":/images/logo.jpg"));
    QCommandLineParser parser;
    parser.setApplicationDescription("A companion client for Tinfoil");
    parser.addHelpOption();
    parser.addVersionOption();
    parser.process(app);
    QTranslator translator;
    if(translator.load(QLocale(), app.applicationName(), ".", QString(), ".qm"))
        app.installTranslator(&translator);
    MainWindow win;
    win.show();
    return app.exec();
}
