/*
AUTHOR:		Skyler Reeves & Ethan Benson
DATE:		04-14-2016
TITLE:		Assignment 5, CSC 235
PURPOSE:	First, the program will prompt the user to input triangle side lengths and then 
            return what type of triangle it is (SCALENE, ISOCELES, EQUILATERAL) or inform 
            the user if the data was INVALID. Afterwards, the program will prompt the user 
            to enter a first name, middle initial, and last name and then return the data as 
            a concatenated string.
*/
#include "Triangle.h"
#include "Name.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned int a, b, c;
	cout << "Please enter 3 integers each separated by a space and press <ENTER>: ";
	cin >> a >> b >> c;

	Triangle triangle1 = getTriangle(a, b, c);
	cout << getString(triangle1) << endl;

	//**********************************************************************

	string firstName;
	string lastName;
	char midInitial;

	cout << endl << "Please enter your first name and press <ENTER>: ";
	cin >> firstName;

	cout << endl << "Please enter your middle initial and press <ENTER>: ";
	cin >> midInitial;

	cout << endl << "Please enter your last name and press <ENTER>: ";
	cin >> lastName;

	Name newName = getName(firstName, lastName, midInitial);

	cout << endl << getString(newName) << endl;

	return 0;
}
