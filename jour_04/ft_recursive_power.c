int	ft_recursive_power(int nb, int power)
{
  if (!power)
    return (0);
  if (power == 1)
    return (nb);
  return (nb * ft_recursive_power(nb, power - 1));
}
