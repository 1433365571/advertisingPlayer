#ifndef FROMXIAOSHENTU_H
#define FROMXIAOSHENTU_H

#include <QWidget>
#include <QPushButton>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QPainter>
#include <QRect>
#include <QImage>
#include <QMessageBox>
#include "tcQrencode.h"

namespace Ui {
class fromXiaoShenTU;
}

class fromXiaoShenTU : public QWidget
{
    Q_OBJECT

public:
    explicit fromXiaoShenTU(QWidget *parent = 0);
    ~fromXiaoShenTU();
    void changeFun();
    void clickCodeImg();

signals:

    void mySignal();

public slots:

private:

    QPushButton btn;
    QPushButton code_img_btn;
    Ui::fromXiaoShenTU *ui;
    TcQrencode tq;


};
 #endif // FROMXIAOSHENTU_H
