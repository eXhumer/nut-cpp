#ifndef PROGRESSWIDGET_H
#define PROGRESSWIDGET_H

#include <QProgressBar>
#include <QWidget>
#include <QLabel>

class ProgressWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ProgressWidget(QWidget *parent = nullptr);

private:
    QProgressBar *progressBar;
    QLabel *textLabel, *speedLabel;
};

#endif // PROGRESSWIDGET_H
