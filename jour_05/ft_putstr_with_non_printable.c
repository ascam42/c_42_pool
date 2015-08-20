void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_putstr_with_non_printable(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      if (*(str + i) <= 32 && *(str + i) != ' ')
	{
	  ft_putchar('\\');
	  ft_putchar(*(str + i) + 0);
	}
      else
	ft_putchar(*(str + i));
      ++i; 
   }
}

int	main(int ac, char **av)
{
  char	*array;

  array = "Test\n with backslash";
  ft_putstr_with_non_printable(array);
  ft_putchar('\n');
  return (0);
}
