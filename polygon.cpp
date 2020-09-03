#include "polygon.h"

Polygon::Polygon()
{
    std::cout<<"created"<<std::endl;
}


void Polygon::SetProperties(unsigned radius, unsigned sides, const QPoint& center)
{

    Radius = radius;
    Sides  = sides;
    Center = center;
}

const Polygon::PointsType& Polygon::GetPoints() const
{
    return Points;
}

void Polygon::Compute()
{

    Points.clear();

    float stepSize = (2.f*PI/Sides);
    for (float t = 0.f; t < 2.f*PI; t+=stepSize)
    {

        int x = Center.x() + Radius*std::cos(t);
        int y = Center.y() + Radius*std::sin(t);
        Points.push_back(std::make_shared<QPoint>(x,y));
    }

}
