void	ft_print_comb(void)
{
  char	number1;
  char	number2;
  char	number3;

  number1 = '0';
  number2 = '1';
  number3 = '2';
  while (number1 <= '7' || number2 <= '8' || number3 <= '9')
    {
      if (number1 != number2 && number2 != number3)
	{
	  ft_putchar(number1);
	  ft_putchar(number2);
	  ft_putchar(number3);
	  if (number1 != '7' || number2 != '8' || number3 != '9')
	    {
	      ft_putchar(',');
	      ft_putchar(' ');
	    }
	}
      ++number3;
      if (number3 == '9' + 1)
	number3 = number2++ + 1;
      if (number2 == '9' + 1)
	number2 = number1++ + 1;
    }
}
