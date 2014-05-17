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