void	ft_print_alphabet(void)
{
  char	letter;
  int	count;

  letter = 'a';
  count = 0;
  while (count < 26)
    {
      ft_putchar(letter);
      ++letter;
      ++count;
    }
}
