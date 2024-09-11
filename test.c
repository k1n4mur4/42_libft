#include "./includes/libft.h"
#include "./includes/ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc <= 2 || argc >= 5)
		return (0);
	char *str = argv[1];
	char *ft_str = argv[1];
	char *end = NULL;
	int	base = atoi(argv[2]);
	char *ft_end = end;

	ft_printf("str:%s base:%d", str, base);
	ft_printf("\n===========================\n");
	ft_printf("   strtol:%d	endptr:%s", strtol(str, &end, base), end);
	ft_printf("\n===========================\n");
	ft_printf("ft_strtol:%d	endptr:%s\n", ft_strtol(ft_str, &ft_end, base), ft_end);

	ft_printf("===========================\n");
	ft_printf("===========================\n");
	ft_printf("===========================\n");


	ft_printf("   atoi:%d", atoi(str));
	ft_printf("\n===========================\n");
	ft_printf("ft_atoi:%d\n", ft_atoi(ft_str));
	return (0);
}