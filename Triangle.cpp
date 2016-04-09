/*
    This implementation file defines the functions of the Triangle.h header file.
*/
#include "Triangle.h"
#include <iostream>
#include <string>

using namespace std;

Triangle getTriangle(unsigned int a, unsigned int b, unsigned int c)
{
    if (a + b < c || b + c < a || a + c < b || a <= 0 || b <= 0 || c <= 0)
        return INVALID;
    else if (a == b && b == c)
        return EQUILATERAL;
    else if (a == b || b == c || c == a)
        return ISOCELES;
    else /*(a != b && b!= c && c != a)*/
        return SCALENE;
}

string getString(Triangle type)
{
    switch(type)
    {
        case EQUILATERAL:
            return "Equilateral";
        case ISOCELES:
            return "Isoceles";
        case SCALENE:
            return "Scalene";
        default:
            return "Invalid, not a triangle.";
    }
    
//getName function goes here
//getString function goes here (for the getName return value)
};

