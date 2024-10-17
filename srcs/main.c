#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"

int main(void)
{
    char    *line;
    int     fd;

    fd = ft_fopen("test.txt", "r");
    while (get_next_line(fd, &line))
    {
        ft_printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}