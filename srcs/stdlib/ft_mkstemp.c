#include "libft.h"

int	ft_mkstemp(char *template)
{
	int		fd;
	char	*temp;
	char	*temp_file;

	temp = ft_strdup(template);
	temp_file = ft_mktemp(temp);
	fd = open(temp_file, O_RDWR | O_CREAT | O_EXCL, 0600);
	free(temp);
	return (fd);
}
