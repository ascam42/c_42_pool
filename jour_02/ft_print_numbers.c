void	ft_print_numbers(void)
{
  char	number;
  int	count;

  number = '0';
  count = 0;
  while (count < 10)
    {
      ft_putchar(number);
      ++number;
      ++count;
    }
}
