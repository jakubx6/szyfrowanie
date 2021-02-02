#include<iostream>
typedef unsigned long long int inti;

inti odwr_mod(inti a, inti k)
{
	p0 = 0; p1 = 1; a0 = a; n0 = k;
	q = n0 / a0;
	r = n0 % a0;
	while (r > 0)
	{
		t = p0 - q * p1;
		if (t >= 0)
			t = t % k;
		else
			t = k - ((-t) % k);
		p0 = p1; p1 = t;
		n0 = a0; a0 = r;
		q = n0 / a0;
		r = n0 % a0;
	}
	return p1;

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
}