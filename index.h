#ifndef INDEX_H
#define INDEX_H

#include <QWidget>
#include "fromxiaoshentu.h"
#include <QMouseEvent>
#include <QPoint>

namespace Ui {
class index;
}

class index : public QWidget
{
    Q_OBJECT

public:
    explicit index(QWidget *parent = 0);
    ~index();
    void revSignal();

protected:
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);

signals:
    void clicked();

public slots:
    void changeFun();

private:
    fromXiaoShenTU t;
    Ui::index *ui;
    QPoint mousePos;
};

#endif // INDEX_H
