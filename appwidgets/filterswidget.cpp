#include "filterswidget.h"
#include <QBoxLayout>
#include <QGroupBox>

FiltersWidget::FiltersWidget(QWidget *parent)
    : QWidget(parent)
{
    this->setLayout(new QVBoxLayout);
    auto typesGroup = new QGroupBox(tr("tabs.filters.types"));
    auto regionsGroup = new QGroupBox(tr("tabs.filters.region"));
    this->layout()->addWidget(typesGroup);
    this->layout()->addWidget(regionsGroup);
}
