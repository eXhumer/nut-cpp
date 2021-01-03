#include "mainwindow.h"

#include "filesview.h"
#include "filterswidget.h"
#include "savepathswidget.h"
#include "localscanpathswidget.h"
#include "remotepullpathswidget.h"
#include "userswidget.h"
#include "optionswidget.h"
#include "headerwidget.h"
#include "progresswidget.h"

#include <QApplication>
#include <QMessageBox>
#include <QTabWidget>
#include <QStatusBar>
#include <QMenuBar>
#include <QScreen>
#include <QLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    auto mainScreenSize = QGuiApplication::primaryScreen()->size();
    this->resize(mainScreenSize / 2);

    this->setCentralWidget(new QWidget);
    this->centralWidget()->setLayout(new QVBoxLayout);

    this->centralWidget()->layout()->addWidget(new HeaderWidget);

    auto tabbedWidget = new QTabWidget;
    tabbedWidget->addTab(new FilesView, tr("tabs.files"));
    tabbedWidget->addTab(new FiltersWidget({{"US", "en"}, {"UK", "en"}, {"UA", "en"}, {"UB", "en"}, {"UZ", "en"}}), tr("tabs.filters"));
    tabbedWidget->addTab(new SavePathsWidget, tr("tabs.save_paths"));
    tabbedWidget->addTab(new LocalScanPathsWidget, tr("tabs.local_scan_paths"));
    tabbedWidget->addTab(new RemotePullPathsWidget, tr("tabs.remote_pull_paths"));
    tabbedWidget->addTab(new UsersWidget, tr("tabs.users"));
    tabbedWidget->addTab(new OptionsWidget, tr("tabs.options"));
    this->centralWidget()->layout()->addWidget(tabbedWidget);

    this->setMenuBar(new QMenuBar);
    auto fileMenu = this->menuBar()->addMenu(tr("menu_bar.file"));
    auto exitAct = fileMenu->addAction(tr("menu_bar.file.exit"));
    connect(exitAct, &QAction::triggered, &QCoreApplication::quit);
    auto helpMenu = this->menuBar()->addMenu(tr("menu_bar.help"));
    auto aboutAct = helpMenu->addAction(tr("menu_bar.help.about"));
    connect(aboutAct, &QAction::triggered, [this](){
        QMessageBox::about(this, tr("menu_bar.help.about"), tr("menu_bar.help.about_text"));
    });
    auto aboutQtAct = helpMenu->addAction(tr("menu_bar.help.aboutqt"));
    connect(aboutQtAct, &QAction::triggered, [this](){
        QMessageBox::aboutQt(this, tr("menu_bar.help.aboutqt"));
    });

    this->setStatusBar(new QStatusBar);
    this->statusBar()->showMessage(tr("status_bar.ready"));

    this->centralWidget()->layout()->addWidget(new ProgressWidget);
}
