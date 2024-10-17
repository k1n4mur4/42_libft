#include "libft.h"
#include "ft_printf.h"

int main(void)
{
    ft_printf("%d", ft_strtol("0x16", NULL, 16));
    return (0);
}