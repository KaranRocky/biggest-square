

int		ft_is_enough_lines(char **array_map, int count_rows)
{
	int		i;

	i = 0;
	while (array_map[i] != 0)
	{
		++i;
	}
	if (i == count_rows)
		return (1);
	return (0);
}
