void	ft_putchar(char c)
{
  write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) 
    ++i;
  return (s1[i] - s2[i]);
}

void	ft_str_swap(char *str_a, char *str_b)
{
  char	*str_tmp;

  str_tmp = str_a;
  str_a = str_b;
  str_b = str_tmp;
}

char	**ft_sort_char_arrays(int nb_arrays, char **array)
{
  int	i;
  int	j;  

  i = 0;
  while (i < nb_arrays)
    {
      j = 1;
      while (j < nb_arrays)
	{
	  if (*(array + j + 1)
	      && ft_strcmp(*(array + j), *(array + j + 1)) > 0)
	    ft_str_swap(*(array + j), *(array + j + 1));
	  ++j;	
	}
      ++i;
    }
  return (array);
}

void	ft_sort_params(int argc, char **argv)
{
  int	i;
  int	j;
  char	*param_to_put;

  i = 1;
  while (i < argc)
    {
      argv = ft_sort_char_arrays(argc - 1, argv);
	{
	  param_to_put = *(argv + i);
	  j = 0;  
	  while (*(param_to_put + j) != '\0')
	    {
	      ft_putchar(*(param_to_put + j));
	      ++j;
	    }
	  ft_putchar('\n');
	  ++i;
	}
    }
}

int	main(int argc, char **argv)
{
  ft_sort_params(argc, argv);
  return (0);
}
