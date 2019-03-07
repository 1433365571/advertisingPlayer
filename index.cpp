#include "index.h"
#include "ui_index.h"

index::index(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::index)
{
    ui->setupUi(this);

    this->setWindowTitle("XiaoShenTU");

    connect(this, SIGNAL(clicked()), this, SLOT(changeFun()));

    connect(&t,&fromXiaoShenTU::mySignal,this,&index::revSignal);

}

index::~index()
{
    delete ui;
}

void index::changeFun(){

    this->hide();

    t.show();

}

void index::revSignal(){

    this->show();

    t.hide();

}



void index::mousePressEvent(QMouseEvent *ev)
{
    mousePos = QPoint(ev->x(), ev->y());
}

void index::mouseReleaseEvent(QMouseEvent *ev)
{
    if(mousePos == QPoint(ev->x(), ev->y())) emit clicked();
}

