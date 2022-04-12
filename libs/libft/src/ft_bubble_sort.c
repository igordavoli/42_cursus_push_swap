void	ft_bubble_sort(int *tab, int size)
{
	int		i;
	int		j;
	int		swp;

	j = 0;
	while (j < size)
	{
		i = 1;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				swp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = swp;
			}
			i++;
		}
		j++;
	}
}
