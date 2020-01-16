#include <QApplication>
#include <QSurfaceFormat>
#include "worldwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);

    WorldWindow window;
    window.setFormat(format);
    window.show();
    return app.exec();
}
