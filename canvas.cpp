#include "canvas.h"
#include "ui_canvas.h"

Canvas::Canvas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Canvas)
{
    ui->setupUi(this);

}

Canvas::~Canvas()
{
    delete ui;
}

void Canvas::SetPoints(const PointsType& points)
{
    Points = points;
}

void Canvas::Clear()
{
    Points.clear();
}

void Canvas::paintEvent(QPaintEvent *)
{


    auto painter = std::make_unique<QPainter>(this);

    if(Points.empty())
        return;

    //computing pyligon vertex using the polar equation of the circle
    for(auto point = Points.begin(); point != Points.end()-1; ++point)
    {
        //draw a line
        painter->drawLine(*point, *(point+1));
    }

    painter->drawLine(*Points.begin(), *Points.rbegin());


}
