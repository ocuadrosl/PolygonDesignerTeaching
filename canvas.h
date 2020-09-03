#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPainter>
#include <QPoint>

#include <memory>

#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkNamedColors.h>
#include <vtkNew.h>
#include <QSurfaceFormat>

#include <QVTKOpenGLNativeWidget.h>
#include <QSurfaceFormat>

namespace Ui {
class Canvas;
}

class Canvas : public QWidget
{
    //Qt macro
    Q_OBJECT

    using PointsType = std::vector<QPoint>;
public:
    explicit Canvas(QWidget *parent = nullptr);
    ~Canvas();

    void SetPoints(const PointsType& points);
    void Clear();

private:
    Ui::Canvas *ui;
    PointsType Points;


protected:

    void paintEvent(QPaintEvent *event);

};

#endif // CANVAS_H
