#include <iostream>
typedef unsigned long long int inti;

void szyfrowanie()
{
	b = t->Length;

	for (int j = 0; j < b; j++)
	{
		d = t[j];
		z = z + pot_mod(d, e1, n);
		if (j != b - 1)
			z = z + " ";
	}
}