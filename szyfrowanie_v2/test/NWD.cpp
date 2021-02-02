#include "pch.h"
#include<iostream>
#include"NWD.h"

using namespace std;

inti NWD::obl()
{
	while (a != b)
		if (a > b)
			a -= b;
		else
			b -= a;

	return(a);
}

void NWD::wczytaj()
{
	cin >> a;
	cin >> b;

}

NWD::NWD(int aa, int bb)
{
	a = aa;
	b = bb;
}