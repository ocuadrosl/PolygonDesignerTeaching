#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include "polygon.h"

#include <QMainWindow>

#include <QSurfaceFormat>


//Qt5 macros
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT //This is the main Qt macro

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_DrawPushButton_clicked();

    void on_ClearPushButton_clicked();

private:
    Ui::MainWindow *ui;
    std::unique_ptr<Polygon> polygon  = std::make_unique<Polygon>();
};
#endif // MAINWINDOW_H
