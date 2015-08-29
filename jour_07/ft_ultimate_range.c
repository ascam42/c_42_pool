int	*ft_ultimate_range(int **range, int min, int max)
{
  int	i;

  if (min >= max)
    return (0);
  *range = (int*)malloc((max - min) * sizeof(int));
  i = 0;
  while (i < (max - min))
    {
      *(range_tab + i++) = min++;
    }
  return (range_tab);
}
