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
