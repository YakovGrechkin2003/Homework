#include <iostream>
​
#include "Circle.h"
#include "Triangle.h"
#include "Sqare.h"
#include "Phombus.h"

int main()
{
    Circle circle;
    ​
        double rad;
    cout << "enter radius"; cin >> rad;
        try {
        circle.SetRadius(rad);
    }
    catch (int error) {
        switch (error)
        {
        case -1:
            cout << "ERROR! Radius < 0" << endl;
            radius = 1;
            circle.SetRadius(radius);
            break;
        case 0:
            cout << "ERROR! Radius equal 0" << endl;
            radius = 1;
            circle.SetRadius(radius);
            break;
        }
    }
    ​
        circle.Perimeter();
    cout << "Circle perimeter = " << circle.GetPerimeter() << endl;
    cout << "Circle square = " << circle.Square() << endl;


    Triangle triangle;
    ​
        double side;
    ​
        for (int i = 1; i <= 3; ++i) {
            cout << "Enter side " << i;
            cin >> side; cout << endl;
            ​
                try {
                switch (i)
                {
                case 1:
                    triangle.SetSideOne(side);
                    break;
                case 2:
                    triangle.SetSideTwo(side);
                    break;
                case 3:
                    triangle.SetSideThree(side);
                    break;
                }
            }
            catch (int error) {
                switch (error)
                {
                case -1:
                    cout << "ERROR! Side < 0" << endl;
                    side = 1;
                    switch (i)
                    {
                    case 1:
                        triangle.SetSideOne(side);
                        break;
                    case 2:
                        triangle.SetSideTwo(side);
                        break;
                    case 3:
                        triangle.SetSideThree(side);
                        break;
                    }
                    break;
                case 0:
                    cout << "ERROR! Side equal 0" << endl;
                    side = 1;
                    switch (i)
                    {
                    case 1:
                        triangle.SetSideOne(side);
                        break;
                    case 2:
                        triangle.SetSideTwo(side);
                        break;
                    case 3:
                        triangle.SetSideThree(side);
                        break;
                    }
                    break;
                }
            }
        }

    cout << "Triangle perimeter " << triangle.Perimeter() << endl;
    cout << "Triangle square " << triangle.Square() << endl;


    Square square;

    double side;
    cout << "Enter side square "; cin >> side;

    try
    {
        sqare.SetSide1(side);
    }
    catch(int error)
    {
        switch (i)
        {
            case -1
                cout << "side < 0";
                break;
            case 0
            cout << "side = 0";
                break;
        }
    }
    square.Perimeter();
    cout << "Perimeter = " << square.GetPerimeter << endl;

    sqare.Sqare();
    cout << "Square = " << square.GetSquare << endl;


    Rhombus rhombus;

    cout << "Enter side 1 rhombus: "; cin >> side;

    try
    {
        rhombus.SetSide1(side);
    }
    catch (int error)
    {
        switch (i)
        {
            case -1
            cout << "side < 0";
            break;

            case 0
            cout << "side = 0";
            break;
        }
    }

    cout << "Enter side 2 rhombus:  "; cin >> side;

    try
    {
        rhombus.SetSide1(side);
    }
    catch (int error)
    {
        switch (i)
        {
            case -1
            cout << "side < 0";
            break;

            case 0
            cout << "side = 0";
            break;
        }
    }

    cout << "Enter double diagonal1 rhombus : "; cin >> side;

    try
    {
        rhombus.SetDiagonal1(side);
    }
    catch (int error)
    {
        switch (i)
        {
            case -1
            cout << "side < 0";
            break;

            case 0
            cout << "side = 0";
            break;
        }
    }

    cout << "enter diagonal2 rhombus"; cin >> side;

    try
    {
        rhombus.SetDiagonal2(side);
    }
    catch (int error)
    {
        switch (i)
        {
            case -1
            cout << "side < 0";
            break;

            case 0
            cout << "side = 0";
            break;
        }
    }

    rhombus.Perimeter()
        cout << "perimeter = " << rhombus GetPerimeter << endl;
    rhombus.Square()
        cout << "Square = " << rhombus.GetSquare << endl;
}