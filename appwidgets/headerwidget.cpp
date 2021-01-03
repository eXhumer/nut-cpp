#include "headerwidget.h"
#include <QBoxLayout>

HeaderWidget::HeaderWidget(QWidget *parent)
    : QWidget(parent)
{
    this->setLayout(new QVBoxLayout);
    auto topLayout = new QHBoxLayout;
    this->scanBtn = new QPushButton(tr("header.scan"), this);
    this->scanBtn->setMaximumWidth(100);
    topLayout->addWidget(this->scanBtn);
    this->organizeBtn = new QPushButton(tr("header.organize"), this);
    this->organizeBtn->setMaximumWidth(200);
    topLayout->addWidget(this->organizeBtn);
    this->pullBtn = new QPushButton(tr("header.pull"), this);
    this->pullBtn->setMaximumWidth(100);
    topLayout->addWidget(this->pullBtn);
    this->updateTitleDbBtn = new QPushButton(tr("header.update_titledb"), this);
    this->updateTitleDbBtn->setMaximumWidth(200);
    topLayout->addWidget(this->updateTitleDbBtn);
    this->decompressNszBtn = new QPushButton(tr("header.decompress_nsz"), this);
    this->decompressNszBtn->setMaximumWidth(200);
    topLayout->addWidget(this->decompressNszBtn);
    this->compressNspBtn = new QPushButton(tr("header.compress_nsp"), this);
    this->compressNspBtn->setMaximumWidth(200);
    topLayout->addWidget(this->compressNspBtn);
    this->grantGoogleAuthBtn = new QPushButton(tr("header.grant_google_oauth"), this);
    this->grantGoogleAuthBtn->setMaximumWidth(200);
    topLayout->addWidget(this->grantGoogleAuthBtn);
    topLayout->addStretch();
    auto bottomLayout = new QHBoxLayout;
    this->serverInfo = new QLabel(tr("PLACEHOLDER_1"), this);
    this->serverInfo->setMinimumWidth(200);
    this->serverInfo->setAlignment(Qt::AlignCenter);
    bottomLayout->addWidget(this->serverInfo);
    this->usbStatus = new QLabel(tr("PLACEHOLDER_2"), this);
    this->usbStatus->setMinimumWidth(50);
    this->usbStatus->setAlignment(Qt::AlignCenter);
    bottomLayout->addWidget(this->usbStatus);
    bottomLayout->addStretch();
    static_cast<QVBoxLayout*>(this->layout())->addLayout(topLayout);
    static_cast<QVBoxLayout*>(this->layout())->addLayout(bottomLayout);
}
