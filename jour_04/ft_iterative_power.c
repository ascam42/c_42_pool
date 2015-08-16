int	ft_iterative_power(int nb, int power)
{
  int	i;
  int	init;

  if (!power)
    return (0);
  i = 1;
  init = nb;
  while (i < power)
    {
      nb *= init;
      ++i;
    }
  return (nb);
}
