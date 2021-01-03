#ifndef HEADERWIDGET_H
#define HEADERWIDGET_H

#include <QPushButton>
#include <QWidget>
#include <QLabel>

class HeaderWidget : public QWidget
{
    Q_OBJECT

public:
    explicit HeaderWidget(QWidget *parent = nullptr);

private:
    QPushButton *scanBtn, *organizeBtn, *pullBtn,
        *updateTitleDbBtn, *decompressNszBtn,
        *compressNszBtn, *grantGoogleAuthBtn;

    QLabel *serverInfo, *usbStatus;
};

#endif // HEADERWIDGET_H
