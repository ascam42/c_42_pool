int	ft_place_queen(int nb_queens, int **gird)
{
  int	i;

  if (nb_queens > 8)
    return (1);
  while (i < 8)
    {


int	ft_eight_queens_puzzle(void)
{
  int	i;
  int	j;
  int	map[8][8];
  int	count;

  i = 0;
  while (i < 8)
    {
      j = 0;
      while (j < 8)
	{
	  queens[i][j] = 0;
	  ++j;
	}
      ++i;
    }
  i = 0;
  count = 0;
  while (i < 64)
    {
      count += (ft_place_queen(8, map)) ? 1 : 0;
      ++i;
    }
  return (count);
}
