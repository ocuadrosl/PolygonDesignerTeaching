#include "polygon.h"

Polygon::Polygon()
{

}


void Polygon::SetProperties(unsigned radius, unsigned sides, const QPoint& center)
{

    Radius = radius;
    Sides  = sides;
    Center = center;
}

Polygon::PointsType Polygon::GetPoints() const
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

        //std::cout<<x<<", "<<y<<std::endl;

        Points.push_back(QPoint(x,y));
    }

}
