#pragma once
#include <string>
using namespace std;

struct Name
{
	string fName;
	string lName;
	char mInitial;
};

Name getName(string firstName, string lastName, char middleInitial);
string getString(Name fullName);
