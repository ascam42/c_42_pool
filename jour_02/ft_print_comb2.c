void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_print_comb2(void)
{
  char	number_a[2];
  char	number_b[2];

  number_a[0] = '0';
  number_a[1] = '0';
  number_b[0] = '0';
  number_b[1] = '1';
  while (number_a[0] != '9' || number_a[1] != '9')
    {
      while (number_b[0] <= '9' && number_b[1] <= '9')
	{
	  ft_putchar(number_a[0]);
	  ft_putchar(number_a[1]);
	  ft_putchar(' ');
	  ft_putchar(number_b[0]);
	  ft_putchar(number_b[1]);
	  ft_putchar(',');
	  ft_putchar(' ');
	  number_b[1] = (number_b[1] == '9') ? '0' : number_b[1] + 1;
	  number_b[0] += (number_b[1] == '0') ? 1 : 0;
	}
      number_a[1] = (number_a[1] == '9') ? '0' : number_a[1] + 1;
      number_a[0] += (number_a[1] == '0') ? 1 : 0;
      number_b[1] = '0';
      number_b[0] = '0';
<z    }
}

int	main(int ac, char **av)
{
  ft_print_comb2();
  ft_putchar('\n');
  return (0);
}
