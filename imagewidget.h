#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QWidget>

namespace Ui {
class imageWidget;
}

class imageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit imageWidget(QWidget *parent = 0);
    ~imageWidget();

private:
    Ui::imageWidget *ui;
};

#endif // IMAGEWIDGET_H
