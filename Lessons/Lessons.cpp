// Lessons.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251>nul");
	const double kmInMile = 1.6099344;
	double distMile, distKm;
	cout<<"Укажите расстояние в милях"<<endl;
	cin>>distMile;
	distKm = distMile * kmInMile;
	cout<<"Расстояние в км: "<<distKm<<endl;

	system("pause>nul");
    return 0;
}

