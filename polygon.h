#ifndef POLYGON_H
#define POLYGON_H

#include <QPoint>
#include <vector>
#include <cmath>
#include <iostream>
#include <memory>

class Polygon
{

    using  PointsType = std::vector<std::shared_ptr<QPoint>>;
    const float PI = 3.14f;

public:
    Polygon();
    void SetProperties(unsigned radius, unsigned sides, const QPoint& center);
    void Compute();
    const PointsType& GetPoints() const;


private:

    unsigned Radius;
    unsigned Sides;
    QPoint   Center;

    PointsType Points;


};

#endif // POLYGON_H
