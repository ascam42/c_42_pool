int	ft_fibonacci(int index)
{
  if (!index)
    return (-1);
  else if (index <= 1)
    return (index);
  return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
