// Variables and Types.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    double maxPoints = 400;
	const double minGrade = .6;
	double minPoints = maxPoints * minGrade;
	double points;
	double * maxPointsPtr = &maxPoints;
	double estPoints = 369;
	bool pass;

	((estPoints > minPoints) ? (pass = true) : (pass = false));

	if(pass)
		cout << "I Will Pass" << endl;
	else
		cout << "I Will Not Pass" << endl;

	cout << "Value: " << *maxPointsPtr << "\n" << "Address: " << maxPointsPtr << endl;
	
	maxPointsPtr = &minPoints;

	cout << "Value: " << *maxPointsPtr << "\n" << "Address: " << maxPointsPtr << endl;

	cout << "Signed Int: " << sizeof(signed) << endl;
	cout << "Signed Int: " << sizeof(unsigned) << endl;
	cout << "Signed Int: " << sizeof(signed) << endl;
}

