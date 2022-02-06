

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	while (*src)
	{
		if (nb <= 0)
			break ;
		*tmp = *src;
		src++;
		tmp++;
		nb--;
	}
	*tmp = 0;
	return (dest);
}
