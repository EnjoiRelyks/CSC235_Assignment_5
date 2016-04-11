/*
This implementation file defines the functions of the Name.h header file.
*/

#include "Name.h"
#include <iostream>
#include <string>
using namespace std;

Name getName(string firstName, string lastName, char middleInitial)
{
	Name name1;
	name1.fName = firstName;
	name1.lName = lastName;
	name1.mInitial = middleInitial;

	return name1;
}

string getString(Name fullName)
{
	string str = fullName.fName + " " + fullName.mInitial + ". " + fullName.lName; //concatenates the data into a single string
	return str;
}
