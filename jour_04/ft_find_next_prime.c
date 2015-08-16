int	ft_find_next_prime(int nb)
{
  int	i;
  int	undivisible;

  undivisible = 0;
  if (!nb || nb <= 1)
    return (0);
  while (undivisible != nb - 2)
    {
      i = nb - 1;
      undivisible = 0;
      while (i > 1)
	{
	  undivisible += (nb % i == 0) ? 0 : 1;
	  --i;
	}
      if (undivisible == nb - 2)
	return (nb);
      else
	++nb;
    }
  return (0);
}
