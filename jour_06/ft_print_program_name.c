void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_print_program_name(char **argv)
{
  int	i;
  char	*prog_name;

  i = 0;
  prog_name = *argv;
  while (*(prog_name + i) != '\0')
    {
      ft_putchar(*(prog_name + i));
      ++i;
    }
  ft_putchar('\n');
 
}

int	main(int argc, char **argv)
{
  ft_print_program_name(argv);
  return (0);
}
