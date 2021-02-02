#include<iostream>
typedef unsigned long long int inti;

inti pot_mod(inti a, inti w, inti n)
{
	inti pot, wyn, q;

	pot = a; wyn = 1;
	for (q = w; q > 0; q /= 2)
	{
		if (q % 2) wyn = (wyn * pot) % n;
		pot = (pot * pot) % n;
	}
	return wyn;
}