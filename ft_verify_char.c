

int		ft_verify_char(char *map, char *vals)
{
	int		i;

	i = 0;
	if ((map[i] == 0) || (map[i] == '\n'))
		return (0);
	while (map[i] != '\0')
	{
		if (map[i] != vals[0] && map[i] != vals[1] && map[i] != '\n')
			return (0);
		if ((map[i] == '\n') && (map[i + 1] == '\n'))
			return (0);
		i++;
	}
	return (1);
}
