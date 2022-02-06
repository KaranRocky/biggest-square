

#include "bsq_head.h"

#define BUFLEN 4096

char		*ft_read_input(void)
{
	int		bufcharnum;
	char	readbuf[BUFLEN + 1];
	char	*str;
	char	*result;

	result = malloc(1);
	while ((bufcharnum = read(0, readbuf, BUFLEN)))
	{
		str = ft_strdup(result, (bufcharnum + 1));
		str = ft_strncat(str, readbuf, bufcharnum);
		free(result);
		result = str;
	}
	return (result);
}
