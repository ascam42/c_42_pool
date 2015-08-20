char	*ft_strncat(char *dest, char *src, int nb)
{
  char	*ptr;

  ptr = dest;
  if (!src)
    return (dest);
  while (*ptr != '\0')
    ++ptr;
  while (*src != '\0' && nb > 0)
    {
      *(ptr++) = *(src++);
      --nb;
    }
  return (dest);
}
