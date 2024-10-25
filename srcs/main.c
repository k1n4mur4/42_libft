#include "ft_printf.h"
#include "get_next_line.h"
#include "libft.h"

int	main(void)
{
	char *line;
	int fd;

	fd = ft_fopen("test.txt", "r");
	while (get_next_line(1, &line))
	{
		ft_printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}