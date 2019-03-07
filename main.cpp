#include "index.h"
#include <QApplication>
#include <QtAVWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QtAV::Widgets::registerRenderers();

    index w;

    w.show();

    return a.exec();
}
