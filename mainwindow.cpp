#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) //QWidget is parent of QMainWindow
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_DrawPushButton_clicked()
{

    ui->CanvasWidget->repaint();

    //computing polygon points!!!!

    QPoint center(ui->CanvasWidget->size().width()/2, ui->CanvasWidget->size().height()/2);
    polygon->SetProperties(ui->RadiusSpinBox->value(), ui->SidesSpinBox->value(), center);

    polygon->Compute();
    ui->CanvasWidget->SetPoints(polygon->GetPoints());

    ui->CanvasWidget->repaint();



}

void MainWindow::on_ClearPushButton_clicked()
{
    ui->CanvasWidget->Clear();
    ui->CanvasWidget->repaint();
}
