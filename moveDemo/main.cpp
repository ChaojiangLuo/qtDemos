#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    qputenv("QT_WAYLAND_SHELL_INTEGRATION", "kwayland-shell");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
