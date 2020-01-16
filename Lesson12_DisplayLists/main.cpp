#include <QApplication>
#include <QSurfaceFormat>
#include "texturemappingwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);

    TextureMappingWindow window;
    window.setFormat(format);
    window.show();
    return app.exec();
}
