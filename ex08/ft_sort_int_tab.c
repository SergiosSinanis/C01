#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void ft_sort_int_tab(int *tab,int size)
{
	int d;
	int i;

	i = 0;
	d = 0;

	while(d < size-1)
	{
		while(i < size -1)
		{
			if(tab[i] && tab[i + 1] && tab[i] > tab[i+1])
			{
				ft_swap(&tab[i], &tab[i+1]);
			}
			i++;
		}
		d++;
		i = 0;
	}
}
