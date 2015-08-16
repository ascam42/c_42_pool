void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      ft_putchar(str[i]);
      ++i;
    }
}

void	ft_putnbr(int nb)
{
  if (nb < 0)
    {
      nb = -nb;
      ft_putchar('-');
    }
  if (nb > 9)
    {
      ft_putnbr(nb / 10);
      ft_putnbr(nb % 10);
    }
  else
    ft_putchar(nb + '0');
}

int	ft_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      ++i;
    }
  return (i);
}

char	*ft_strrev(char *str)
{
  int	i;
  int	length;
  char	tmp;

  if (str)
    {
      i = 0;
      length = ft_strlen(str);
      while (i < length / 2)
	{
	  tmp = str[i];
	  str[i] = str[length - i - 1];
	  str[length - i - 1] = tmp;
	  i++;
	}
    }
  return (str);
}

int	main()
{
  ft_putstr("BONJOUR");
  ft_putstr(ft_strrev("BONJOUR"));
  return (0);
}
