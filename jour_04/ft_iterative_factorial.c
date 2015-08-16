int	ft_iterative_factorial(int nb)
{
  int	i;
  int	result;

  if (!nb)
    return (0);
  i = 1;
  result = 1;
  while (i <= nb)
    {
      result *= i;
      ++i;
    }
  return (result);
}
