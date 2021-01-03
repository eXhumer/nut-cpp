#ifndef FILTERSWIDGET_H
#define FILTERSWIDGET_H

#include <QVariantMap>
#include <QWidget>

class FiltersWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FiltersWidget(const QVariantMap &regionLangMap, QWidget *parent = nullptr);
};

#endif // FILTERSWIDGET_H
