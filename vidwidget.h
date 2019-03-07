#ifndef VIDWIDGET_H
#define VIDWIDGET_H

#include <QWidget>
#include <QtAV>
#include <QtAVWidgets>
#include <QHBoxLayout>
#include <QMediaPlaylist>

namespace Ui {
class vidWidget;
}

class vidWidget : public QWidget
{
    Q_OBJECT

public:
    explicit vidWidget(QWidget *parent = 0);
    ~vidWidget();

private:
    Ui::vidWidget *ui;
    QtAV::VideoOutput *m_vo;
    QtAV::AVPlayer *m_player;
};

#endif // VIDWIDGET_H
