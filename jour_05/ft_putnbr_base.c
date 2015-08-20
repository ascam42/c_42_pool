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

void	ft_putnbr_base(int nb, char *base)
{
  int	i;
  int	base_val;
  int	to_print;

  base_val = 0;
  while (*(base + base_val) != '\0')
    ++base_val;
  i = -1;
  while (nb > 0)
    {
      *(to_print + ++i) = nb % base_val;
      nb /= base_val;
    }
  while (i >= 0)
    ft_putchar(*(base + (*(to_print + i--))));
}
int	main(int ac, char **av)
{
  int	to_put;

  ft_putnbr_base(42, "poneyvif");
  ft_putchar('\n');
  return (0);
}
