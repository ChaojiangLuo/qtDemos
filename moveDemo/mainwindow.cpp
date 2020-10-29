#include <QMouseEvent>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}

MainWindow::~MainWindow()
{

}

void MainWindow::mousePressEvent(QMouseEvent * e)
{
    move(100, 100);
}
