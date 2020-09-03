#ifndef POLYGON_H
#define POLYGON_H

#include <QPoint>
#include <vector>
#include <cmath>
#include <iostream>

class Polygon
{

    using  PointsType = std::vector<QPoint>;
    const float PI = 3.14f;

public:
    Polygon();
    void SetProperties(unsigned radius, unsigned sides, const QPoint& center);
    void Compute();
    PointsType GetPoints() const;


private:

    unsigned Radius;
    unsigned Sides;
    QPoint   Center;

    PointsType Points;


};

#endif // POLYGON_H
