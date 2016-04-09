/*
    Skyler Reeves & Ethan Benson
    Assignment 5 CSC 235 
    ** Input notes on program details here **
*/
#include "Triangle.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned int a, b, c;
    cout << "Please enter 3 integers each separated by a space: ";
    cin >> a >> b >> c;
    
    Triangle triangle1 = getTriangle(a, b, c);
    cout << getString(triangle1) << endl;
    
    return 0;
}
