#!/usr/bin/cpp
#include <iostream>
#include "pixel.h"
using namespace std;

pixel pixel:: operator+(pixel p) const
{
    pixel temp;
    temp.red = red + p.red;
    temp.green = gree + p.green;
    temp.blue = blue +p.blue;
    return temp;
}

pixel pixel:: operator*(double v) const
{
    pixel temp;
    temp.red = red*v;
    temp.green = green*v;
    temp.blue = blue*v;
    return temp;
}

pixel pixel:: operator/(int v) const
{
    pixel temp;
    temp.red = red/v;
    temp.green = green/v;
    temp.blue = blue/v;
    return temp;
}

ostream& operator<<(ostream& out, const pixel& p)
{
    out << p.red << ' ';
    out << p.green << ' ';
    out << p.blue;
    return out;
}

istream& operator<<(istream& in, pixel& p)
{
    in >> p.red >> p.green >> p.blue;
    return in;
}