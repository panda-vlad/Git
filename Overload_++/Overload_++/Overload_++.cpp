// Overload_++.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Three_D {
private:
	int x;
	int y;
	int z;
public:
	Three_D();
	~Three_D();

	Three_D operator+(Three_D op2);
	Three_D operator=(Three_D &op2);
};

int main()
{
	Three_D a;
	Three_D b;

	a + b;

	a = b;

    return 0;
}

Three_D::Three_D()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Three_D::~Three_D()
{

}

Three_D Three_D::operator+(Three_D op2)
{
	Three_D temp;

	temp.x = x + op2.x;
	temp.y = y + op2.y;
	temp.z = z + op2.z;
	
	return temp;
}

Three_D Three_D::operator=(Three_D &op2)
{
	x = op2.x;
	y = op2.y;
	z = op2.z;

	return *this;
}
