#include "fromxiaoshentu.h"
#include "ui_fromxiaoshentu.h"

fromXiaoShenTU::fromXiaoShenTU(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fromXiaoShenTU)
{
    ui->setupUi(this);

    this->setWindowTitle("from xst");

    //set btn
    btn.setParent(this);
    btn.setText("返回");
    btn.setWindowTitle("1");
    btn.resize(88,22);
    btn.move(100,0);

    code_img_btn.setParent(this);

    code_img_btn.setText("生成二维码");

    code_img_btn.setWindowTitle("2");

    code_img_btn.resize(88,22);

    connect(&btn,&QPushButton::clicked,this,&fromXiaoShenTU::changeFun);

    connect(&code_img_btn,&QPushButton::clicked,this,&fromXiaoShenTU::clickCodeImg);

}

fromXiaoShenTU::~fromXiaoShenTU()
{
    delete ui;
}


void fromXiaoShenTU::changeFun(){

    emit mySignal();

}

void fromXiaoShenTU::clickCodeImg(){

    QMessageBox::StandardButton rb = QMessageBox::question(NULL, "打印二维码", " 是否打印二维码 ?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(rb == QMessageBox::Yes)
    {
        QImage image=tq.encodeImage("https://www.baidu.com/");

        image.save("IMG_0.jpg","JPG",100);


        //        QPrinter printer;		//---构建新对象
        //        QPrintDialog printDlg(&printer, this);
        //        if (printDlg.exec())			// 用于判断用户是否点击“打印”按钮
        //        {
        //            QPainter painter(&printer);
        //            QRect rect = painter.viewport();	//---获取Qpainter对象的矩形区域
        //            QSize size = image.size();			//--获取图片的大小
        //            size.scale(rect.size(), Qt :: KeepAspectRatio);		//----按照图形比例大小重新设置视口矩形区域

        //            //---打印图片
        //            painter.setViewport(rect.x(), rect.y(), size.width(), size.height());
        //            painter.setWindow(image.rect());
        //            painter.drawImage(0, 0, image);
        //        }

        QPrinter printer;		//---构建新对象

        // 用于判断用户是否点击“打印”按钮
        printer.setOutputFileName("E://test.pdf");
        QPainter painter(&printer);
        QRect rect = painter.viewport();	//---获取Qpainter对象的矩形区域
        QSize size = image.size();			//--获取图片的大小
        size.scale(rect.size(), Qt :: KeepAspectRatio);		//----按照图形比例大小重新设置视口矩形区域

        //---打印图片
        painter.setViewport(rect.x(), rect.y(), size.width(), size.height());
        painter.setWindow(image.rect());
        painter.drawImage(0, 0, image);



    }

}
