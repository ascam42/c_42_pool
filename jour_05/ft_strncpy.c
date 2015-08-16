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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
  long	i;

  i = 0;
  while (i < n)
    {
      if (!src[i])
	dest[i] = '\0';
      dest[i] = src[i];
      ++i;
    }
  dest[i] = '\0';
  return (&dest[i]);
}

int	main(int ac, char **av)
{
  char	chararray[6];

  ft_strncpy(chararray, "abcdefghijk", sizeof(chararray));
  ft_putstr(chararray);
  ft_putchar('\n');
  return (0);
}
