#!/usr/bin/cpp
/*  Pixel class declaration
    File name: pixel.h
*/

#ifndef PIXEL_H
#define PIXEL_H
#include <iostream>
using namespace std:
class pixel
{
public:
//  Constructor Functions
pixel(); // Initialize data members to zero
pixel(int);
pixel(int, int, int);

//  Accessor Functions
int getRed() const;
int getGreen() const;
int getBlue() const;

//  Mutator Functions
void setPixel_value(int r, int g, int b);
void setBlue(int);
void setGreen(int);

//  Overloaded Operators

//  Addition
//  Add twoo pixel
pixel operator+(pixel p) const;

//  Multiplication
//  Multiply a pixel by a floating point value
pixel operator*(double v) const;

//  Division
//  Divide a pixel by an integer value
pixel operator/(int v) const;

//  Input operator
friend istream& operator >>(istream& in, Pixel& p);

//  Output Operator
friend ostream& operator <<(ostream& out, Pixel p);
private:
unsigned int red, green, blue;
};
#endif
