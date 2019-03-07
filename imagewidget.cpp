#include "imagewidget.h"
#include "ui_imagewidget.h"

imageWidget::imageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::imageWidget)
{
    ui->setupUi(this);

    this->setAutoFillBackground(true);

    QPalette palette = this->palette();

    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/cat.jpg").scaled(this->size(),Qt::IgnoreAspectRatio  ,Qt::SmoothTransformation)));// 使用平滑的缩放方式

    this->setPalette(palette);// 给widget加上背景图

}

imageWidget::~imageWidget()
{
    delete ui;
}
