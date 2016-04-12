/*
AUTHOR(S):	Skyler Reeves & Ethan Benson
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
	//Variable Declaration and initialization through user input. 
	unsigned int a, b, c;
	cout << "Please enter 3 integers each separated by a space and press <ENTER>: ";
	cin >> a >> b >> c;

	//Calls to the getTriangle and getString functions.
	Triangle triangle1 = getTriangle(a, b, c);
	cout << getString(triangle1) << endl;

	//Variable Declarations
	string firstName;
	string lastName;
	char midInitial;

	//Prompts the user for input (to pass into the getName & getString functions)
	cout << endl << "Please enter your first name and press <ENTER>: ";
	cin >> firstName;

	cout << endl << "Please enter your middle initial and press <ENTER>: ";
	cin >> midInitial;

	cout << endl << "Please enter your last name and press <ENTER>: ";
	cin >> lastName;

	//Calls to the getName and getString functions
	Name newName = getName(firstName, lastName, midInitial);
	cout << endl << getString(newName) << endl;

	return 0;
}
