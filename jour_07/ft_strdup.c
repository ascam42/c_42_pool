char	*ft_strdup(char *str)
{
  char	*copy;

  if (!str)
    return (0);
  copy = malloc(ft_strlen(str) * sizeof(char));
  copy = ft_strcpy(str, copy);
  return (copy);
}
