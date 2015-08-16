char	*ft_strrev(char *str)
{
  char	tmp;
  int	length;
  int	i;
  int	opposite;

  if (str)
    {
      length = 0;
      while (str[length] != '\0')
	{
	  ++length;
	}
      i = 0;
      while (i < length / 2)
	{
	  tmp = str[i];
	  str[i] = str[length - (i + 1)];
	  str[length - (i + 1)] = tmp;
	  ++i;
	}
    }
  return (str);
}
