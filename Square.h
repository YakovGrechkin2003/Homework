#pragma once

#include "GeometricFigure.h"
#include "GeometricIFigure.h"

class Square : public public GeometricFigure, public GeometricIFigure
{
private:
	side1;

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
	Square() {}
	Square() {
		SetSide1(side1);
	}

	void SetSide1(double side)
	{
		SetSide(side, side1)
	}

	double GetSide1()
	{
		return side1;
	}

	double Perimeter() override
	{
		perimeter = side1 * 4;
		return perimeter;
	}

	double Square() override
	{
		square = side1 * side1;
		return square;
	}
};