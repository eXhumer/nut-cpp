#ifndef FILESWIDGET_H
#define FILESWIDGET_H

#include <QTreeView>

class FilesView : public QTreeView
{
    Q_OBJECT

public:
    explicit FilesView(QWidget *parent = nullptr);

signals:

};

#endif // FILESWIDGET_H
