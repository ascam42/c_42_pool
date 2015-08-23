void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_print_params(int argc, char **argv)
{
  int	i;
  int	j;
  char	*param_to_put;

  i = 1;
  while (i < argc)
    {
      param_to_put = *(argv + i);
      j = 0;	  
      while (*(param_to_put + j) != '\0')
	{
	  ft_putchar(*(param_to_put + j));
	  ++j;
	}
      ft_putchar('\n');
      ++i;
    }
}

int	main(int argc, char **argv)
{
  ft_print_params(argc, argv);
  return (0);
}
