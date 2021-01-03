#include "filterswidget.h"
#include <QGridLayout>
#include <QBoxLayout>
#include <QGroupBox>
#include <QCheckBox>

FiltersWidget::FiltersWidget(const QVariantMap &regionLangMap, QWidget *parent)
    : QWidget(parent)
{
    this->setLayout(new QVBoxLayout);
    auto typesGroup = new QGroupBox(tr("tabs.filters.types"));
    this->layout()->addWidget(typesGroup);
    typesGroup->setLayout(new QGridLayout);
    auto typesLayout = static_cast<QGridLayout*>(typesGroup->layout());
    typesLayout->addWidget(new QCheckBox(tr("tabs.filters.types.base")), 0, 0);
    typesLayout->addWidget(new QCheckBox(tr("tabs.filters.types.dlc")), 0, 1);
    typesLayout->addWidget(new QCheckBox(tr("tabs.filters.types.update")), 0, 2);
    typesLayout->addWidget(new QCheckBox(tr("tabs.filters.types.demo")), 0, 3);
    auto regionsGroup = new QGroupBox(tr("tabs.filters.region"));
    this->layout()->addWidget(regionsGroup);
    static_cast<QVBoxLayout*>(this->layout())->addStretch();
    regionsGroup->setLayout(new QGridLayout);
    auto regionsLayout = static_cast<QGridLayout*>(regionsGroup->layout());
    QList<QString> regions;
    int i = 0;
    int width = 4;
    for (auto const &region : regionLangMap.keys())
    {
        regions.append(region);
    }
    regions.sort();
    for (auto const& region: regions)
    {
        regionsLayout->addWidget(new QCheckBox(region), i / width , i % width);
        i++;
    }
}
