#include "progresswidget.h"
#include <QBoxLayout>

ProgressWidget::ProgressWidget(QWidget *parent)
    : QWidget(parent)
{
    this->setLayout(new QHBoxLayout);
    this->textLabel = new QLabel(tr(""), this);
    this->textLabel->resize(100, 40);
    this->layout()->addWidget(this->textLabel);
    this->progressBar = new QProgressBar(this);
    this->layout()->addWidget(this->progressBar);
    this->speedLabel = new QLabel(tr("0%"), this);
    this->speedLabel->resize(100, 40);
    this->layout()->addWidget(this->speedLabel);
}
