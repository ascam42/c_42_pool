int	ft_atoi(char *str)
{
  int	i;
  int	value;
  int	length;
  int	sign;

  value = 0;
  sign = 1;
  length = 0;
  while (str[length] != '\0')
    {
      ++length;
    }
  i = 0;
  while (i < length)
    {
      if (str[i] == '-')
	sign = -1;
      else
	value = value * 10 + (str[i] - 48);
      ++i;
    }
  return (sign * value);
}
