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
    //  in >> p.red >> p.green >> p.blue; // not a good option
    
    //  Declare local object
    char ch; // for colon
    
    //  Input integer value for red data member
    in >> p.red;
    
    //  Input colon. IF colon not encountered
    // set error state and return
    in >> ch
    if (ch != ':')
    {
        in.setstate(ios::failbit);
        reutrn in;
    }
    
    //  Input integer value for green data member
    in >> p.green;
    
    //  Input colon. IF colon not encountered
    // set error state and return
    in >> ch
    if (ch != ':')
    {
        in.setstate(ios::failbit);
        reutrn in;
    }
    
    //  Input integer value for blue data member
    in >> p.blue;
    
    return in;
}