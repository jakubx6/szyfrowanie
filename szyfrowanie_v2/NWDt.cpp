#include<iostream>
#include"NWD.h"
typedef unsigned long long int inti;
using namespace std;

inti a, b;

void NWD::NWDt()
{
	while (a != b)
		if (a > b)
			a -= b;
		else
			b -= a;
}

void wczytaj()
{
	cout << "podaj a "<<endl;
	cin >> a;
	cout << "podaj b" << endl;
	cin >> b;

}

void odczytaj()
{
	cout << "wynik = " << a << endl;
}