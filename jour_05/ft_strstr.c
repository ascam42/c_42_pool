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

char	*ft_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  int	sub;

  i = 0;
  if (to_find == "")
    return (str);
  while (str[i] != '\0')
    {
      j = 0;
      while (str[i] == to_find[j])
	{
	  sub = i - 1;
	  ++i;
	  ++j;
	  if (to_find[j] == '\0')
	    return (&str[sub]);
	}
      ++i;
    }
  return ('\0');
}

int	main(int ac, char **av)
{
  char	*largestring;
  char	*smallstring;

  largestring = "Texte 42 textooo\n";
  smallstring = "bla";
  ft_putstr(ft_strstr(largestring, smallstring));
  return (0);
}
