#pragma once
#include <string>
using namespace std;

enum Triangle
{
    SCALENE,
    ISOCELES,
    EQUILATERAL,
    INVALID
};

Triangle getTriangle(unsigned int a, unsigned int b, unsigned int c);
string getString(Triangle type);

//struct Name

//Name getName(); interface goes here
//string getString(Struct x); interface goes here
