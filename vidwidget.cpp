#include "vidwidget.h"
#include "ui_vidwidget.h"
using namespace QtAV;
vidWidget::vidWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vidWidget)
{
    ui->setupUi(this);

    m_player = new AVPlayer(this);

    m_vo = new VideoOutput(this);

    m_vo->setOutAspectRatioMode(VideoRenderer::RendererAspectRatio);

    QHBoxLayout *vl = new QHBoxLayout();

    setLayout(vl);

    vl->addWidget(m_vo->widget());

    m_player->setRenderer(m_vo);

    m_player->setRepeat(-1);

    m_player->play("C://cgcf.mp4");






//    GLWidgetRenderer2 renderer;
//    renderer.show();
//    AVPlayer player;
//    player.setRenderer(&renderer);
//    player.play("C://Users//WWW//Desktop//27720635-1-16.mp4");

}

vidWidget::~vidWidget()
{
    delete ui;
}
