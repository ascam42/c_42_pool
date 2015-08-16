int	ft_sqrt(int nb)
{
  int	test_value;
  int	i;

  test_value = nb / 2;
  i = 0;
  while (test_value * test_value != nb)
    {
      if (test_value * test_value > nb)
	test_value /= 2;
      else
	test_value *= 2;
      ++i;
      if (i > nb)
	return (0);
    }
  return (test_value);
}
