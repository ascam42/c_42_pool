void	ft_sort_integer_table(int *tab, int size)
{
  int	i;
  int	j;
  int	tmp;
  int	max;

  i = 0;
  while (i <= size)
    {
      j = 0;
      while (j <= size)
	{
	  if (tab[j] > tab[j + 1])
	    {
	      tmp = tab[j];
	      tab[j] = tab[j + 1];
	      tab[j + 1] = tmp;
	    }
	  ++j;
	}
      ++i;
    }
}
