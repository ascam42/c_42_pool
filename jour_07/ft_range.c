int	*ft_range(int min, int max)
{
  int	*range_tab;
  int	i;

  if (min >= max)
    return (0);
  range_tab = (int*)malloc((max - min) * sizeof(int));
  i = 0;
  while (i < (max - min))
    {
      *(range_tab + i++) = min++;
    }
  return (range_tab);
}
