#include "filterswidget.h"
#include <QBoxLayout>
#include <QGroupBox>
#include <QCheckBox>

FiltersWidget::FiltersWidget(QWidget *parent)
    : QWidget(parent)
{
    this->setLayout(new QVBoxLayout);
    auto typesGroup = new QGroupBox(tr("tabs.filters.types"));
    auto regionsGroup = new QGroupBox(tr("tabs.filters.region"));
    this->layout()->addWidget(typesGroup);
    typesGroup->setLayout(new QHBoxLayout);
    auto typesLayout = static_cast<QHBoxLayout*>(typesGroup->layout());
    typesLayout->addWidget(new QCheckBox(tr("tabs.filters.types.base")));
    typesLayout->addStretch();
    typesLayout->addWidget(new QCheckBox(tr("tabs.filters.types.dlc")));
    typesLayout->addStretch();
    typesLayout->addWidget(new QCheckBox(tr("tabs.filters.types.update")));
    typesLayout->addStretch();
    typesLayout->addWidget(new QCheckBox(tr("tabs.filters.types.demo")));
    this->layout()->addWidget(regionsGroup);
}
