#include "main.h"

/**
* reverse_array -> reversing an array
* @a: array a
* @n: an element of an array
*/
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;
	a = [1, 2, 3, 4];
	aux = 1;
	a = [4, 2, 3, 1];
	p = a;
	for (i = 0; k < n / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
