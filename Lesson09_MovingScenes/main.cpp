#include <QApplication>
#include <QSurfaceFormat>
#include "moveingsceneswindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);

    MoveingScenesWindow window;
    window.setFormat(format);
    window.show();
    return app.exec();
}
