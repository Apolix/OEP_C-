#include <iostream>
#include <fstream>
#include <vector>
#include <cmath> 
#include "point.h"
#include "Circle.h"

using namespace std;

int main ()
{   
    double r = 5;

    string fnev = "Read.txt";
    ifstream f(fnev.c_str());
    double elem;
    vector<double> vec;
	
    int n = 0;
	
	while (!f.eof())
    {
        f >> elem;
        vec.push_back(elem);
        n++;
    }

    Point p = Point();
    Circle c = Circle(r);

    cout << "Az origon levo kor sugara: " << r << endl;

    for (int i = 0; i < n; i+=2)
    {
        p.setx(vec[i]);
        p.sety(vec[i + 1]);
        c.Area(p.getx(),p.gety(),r);
    }
    return 0;
}

Point::Point() 
{
    x = 0;
    y = 0;
}

Point::Point(double xV, double yV)
{
    x = xV;
    y = yV;
}

double Point::getx()
{
    return x;
}

double Point::gety()
{
    return y;
}

void Point::setx(double xV)
{
    x = xV;
}

void Point::sety(double yV)
{
    y = yV;
}

Circle::Circle()
{
    r = 0;
}

Circle::Circle(double rV)
{
    r = rV;
}

void Circle::Area (double xV, double yV, double rV)
{
    if(xV * xV + yV * yV <= rV * rV)
    {
        cout << "Benne van a : (" << xV << "," << yV << ") pont." << endl;
    }
    else
    {
        cout << "Nincs benne a : (" << xV << "," << yV << ") pont." << endl;
    }
}