#ifndef point_H
#define point_H

class Point
{
    private:
        double x;
        double y;
    public:
        Point();
        Point(double x, double y);
        double getx ();
        double gety ();
        void setx (double x);
        void sety (double y);
};

#endif