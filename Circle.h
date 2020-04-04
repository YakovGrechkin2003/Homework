#pragma once

​
#include "GeometricFigure.h"
#include "GeometricIFigure.h"
​
class Circle : public GeometricFigure, public GeometricIFigure {
private:
    double rad;
    ​
public:
    Circle() {}
    Circle(double rad)
    {
        SetRad(rad);
    }
    void SetRad(double rad)
    {
        if (rad < 0) {
            throw - 1;
        }
        else if (rad == 0) {
            throw 0;
        }
        else {
            this->rad = rad;
        }
    }
    double GetRad()
    {
        return rad;
    }
    ​
        double Perimeter() override
    {
        perimeter = 2 * rad * PI;
        return perimeter;
    }
    double Square() override
    {
        square = PI * (rad*rad);
        return square;
    }
    ​
        double GetPerimeter()
    {
        return perimeter;
    }
    double GetSquare()
    {
        return square;
    }
};  