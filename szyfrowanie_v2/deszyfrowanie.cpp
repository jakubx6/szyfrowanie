#include <iostream>
typedef unsigned long long int inti;

void deszyfrowanie()
{
	b = t->Length;

	for (int j = 0; j < b; j++)
	{
		r = 0;
		while (1)
		{
			s = t[j] - 48;
			if (j != b - 1)
			{
				if (t[j + 1] != ' ')
				{
					r = r * 10 + s;
					j++;
				}
				else
				{
					r = r * 10 + s;
					j++;
					break;
				}
			}
			else
			{
				r = r * 10 + s;
				break;
			}
		}

		z = z + pot_mod(r, d, n));
	}
}