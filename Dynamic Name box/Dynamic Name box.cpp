// Dynamic Name box.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string fname;
	string lname;
	cout << "Please Enter Your Name"<< endl;
	cin >> fname >> lname;
	string name = fname + " " + lname;


	string dashes = string(name.size(), '-');

	cout << "+" << dashes << "+\n" << "|" << name << "|" << "\n" << "+" << dashes << "+\n" << endl;
}

