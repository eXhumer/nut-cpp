#include "headerwidget.h"
#include <QBoxLayout>

HeaderWidget::HeaderWidget(QWidget *parent)
    : QWidget(parent)
{
    this->setLayout(new QVBoxLayout);
    auto topLayout = new QHBoxLayout;
    this->scanBtn = new QPushButton(tr("app.header.scan_btn"), this);
    this->scanBtn->setMaximumWidth(100);
    topLayout->addWidget(this->scanBtn);
    this->organizeBtn = new QPushButton(tr("app.header.organize_btn"), this);
    this->organizeBtn->setMaximumWidth(200);
    topLayout->addWidget(this->organizeBtn);
    this->pullBtn = new QPushButton(tr("app.header.pull_btn"), this);
    this->pullBtn->setMaximumWidth(100);
    topLayout->addWidget(this->pullBtn);
    this->updateTitleDbBtn = new QPushButton(tr("app.header.update_titledb_btn"), this);
    this->updateTitleDbBtn->setMaximumWidth(200);
    topLayout->addWidget(this->updateTitleDbBtn);
    this->decompressNszBtn = new QPushButton(tr("app.header.decompress_nsz_btn"), this);
    this->decompressNszBtn->setMaximumWidth(200);
    topLayout->addWidget(this->decompressNszBtn);
    this->compressNszBtn = new QPushButton(tr("app.header.compress_nsz_btn"), this);
    this->compressNszBtn->setMaximumWidth(200);
    topLayout->addWidget(this->compressNszBtn);
    this->grantGoogleAuthBtn = new QPushButton(tr("app.header.grant_gdrive_btn"), this);
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
