// Friendly_Function.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include  "Point.h"
#include  "Function.h"

#include <iostream>

using namespace std;


int main()
{
	Point X;

	ChangeX(X);

	cout << X.getX() << endl;

	return 0;
}
