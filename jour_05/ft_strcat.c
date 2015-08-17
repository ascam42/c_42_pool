char	*ft_strcat(char *dest, char *src)
{
  char	*ptr;

  ptr = dest;
  if (!src)
    return (dest);
  while (*ptr != '\0')
    ++ptr;
  while (*src != '\0')
    *(ptr++) = *(src++);
  return (dest);
}
