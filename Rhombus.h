#pragma once

#include "GeometricFigure.h"
#include "GeometricIFigure.h"

class Rhombus public GeometricFigure, public GeometricIFigure
{
private:
	double side1;
    double side2;
	double diagonal2;
	double diagonal1;

	void SetSide(double side, double& sideClass)
	{
		if (side < 0) {
			throw - 1;
		}
		else if (side == 0) {
			throw 0;
		}
		else {
			sideClass = side;
		}
	}
public:
	Rhombus() {}
	Rhombus()
	{
		SetSide1(side1);
		SetSide2(side2);
		SetDiagonal1(diagonal1);
		SetDiagonal2(diagonal2);
	}

	void SetSide1(double side)
	{
		SetSide(side, side1);
	}


	void SetSide2(double side)
	{
		SetSide(side, side2);
	}

	void SetDiagonal1(double side)
	{
		SetSide(side, diagonal1);
	}

	void SetDiagonal2(double side)
	{
		SetSide(side, diagonal2);
	}

	double GetSide1()
	{
		return side1;
	}

	double GetSide2()
	{
		return side2;
	}

	double GetDiagonal1()
	{
		return diagonal1;
	}

	double GetDiagonal2()
	{
		return diagonal2;
	}

	double Perimeter() override
	{
		perimeter = (side1 * 2) + (side2 * 2);
		return perimeter;
	}

	double Square() override
	{
		sqare = (diagonal1 * diagonal2) / 2;
		return square;
	}

	double GetPerimeter()
	{
		reeturn perimeter;
	}

	double GetSqare()
	{
		return sqare;
	}
};