#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QWidget>
#include <QTextEdit>
#include <QLabel>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPushButton>

#include "graphwidget.h"
#include <QApplication>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //QGraphicsView view;
    //QGraphicsScene scene;

};

#endif // MAINWINDOW_H
