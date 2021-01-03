#include "savepathswidget.h"
#include <QBoxLayout>
#include <QGroupBox>

SavePathsWidget::SavePathsWidget(QWidget *parent)
    : QWidget(parent)
{
    this->setLayout(new QVBoxLayout);
    auto savePathNspGroups = new QGroupBox(tr("tabs.save_paths.nsp"));
    savePathNspGroups->setLayout(new QVBoxLayout);
    this->layout()->addWidget(savePathNspGroups);
    auto savePathNszGroups = new QGroupBox(tr("tabs.save_paths.nsz"));
    savePathNszGroups->setLayout(new QVBoxLayout);
    this->layout()->addWidget(savePathNszGroups);
    auto savePathXciGroups = new QGroupBox(tr("tabs.save_paths.xci"));
    savePathXciGroups->setLayout(new QVBoxLayout);
    this->layout()->addWidget(savePathXciGroups);
}
