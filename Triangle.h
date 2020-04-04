#pragma once

#include "GeometricFigure.h"
#include "GeometricIFigure.h"

class Triangle  public GeometricFigure, public GeometricIFigure
{
private:
	double side1;
	double side2;
	double side3;
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
private:
	Triangle() {}
	Triangle()
	{
		SetSide1(side1);
		SetSide2(side2);
		SetSide3(side3);
	}

	void SetSide1(double side)
	{
		SetSide(side, side1);
	}


	void SetSide2(double side)
	{
		SetSide(side, side2);
	}

	void SetSideThree(double side)
	{
		SetSide(side, side3);
	}
	​
	double GetSide1()
	{
		return side1;
	}

	double GetSide2()
	{
		return side2;
	}

	double GetSide3()
	{
		return side3;
	}

	double Perimeter() override
	{
		perimeter = side1 + side2 + side3;
		return perimeter;
	}

	double Sqare(double midSide) overridw
	{
		sqare = sqrt((side1 * side1) - ((side3 / 2) * (side3 / 2))) * side3 / 2;
		return square;
	}
};