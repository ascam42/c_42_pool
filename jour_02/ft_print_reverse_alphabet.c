void	ft_print_reverse_alphabet(void)
{
  char	letter;
  int	count;

  letter = 'z';
  count = 0;
  while (count < 26)
    {
      ft_putchar(letter);
      --letter;
      ++count;
    }
}
