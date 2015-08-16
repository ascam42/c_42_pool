int	ft_is_prime(int nb)
{
  int	i;
  int	undivisible;

  i = nb - 1;
  undivisible = 0;
  if (!nb || nb <= 1)
    return (0);
  while (i > 1)
    {
      undivisible += (nb % i == 0) ? 0 : 1;
      --i;
    }
  return ((undivisible == nb - 2) ? 1 : 0);
}
