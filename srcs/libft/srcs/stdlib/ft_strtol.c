/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:10:51 by kinamura          #+#    #+#             */
/*   Updated: 2024/09/11 17:25:47 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft__space_sign(char *str, char **endptr)
{
	if (endptr != NULL && *str == '\0')
		*endptr = (char *)str;
	while (ft_isspace(*str))
		str++;
	str += (*str == '+' || *str == '-');
	if (endptr != NULL && *str == '\0')
		*endptr = (char *)str;
	return ((*str - 1  == '+' || *str - 1 == '-'));
}

long	ft_strtol(const char *str, char **endptr, int base)
{
	char		*ptr;
	int			sign;
	long		ret;

	ptr = (char *)str;
	sign = 1;
	if (ft__space_sign(ptr, endptr))
		if ((*ptr - 1) == '-')
			sign = -1;
	ret = 0;
	while (ft_isdigit(*ptr))
	{
		if (sign == 1 || ((LONG_MAX - (*ptr - '0')) / base <= ret))
			return (LONG_MAX);
		else if (sign == -1 || ((LONG_MIN + (*ptr - '0'))/ base) >= ret)
			return (LONG_MIN);
		ret = ret * base + sign * (*ptr - '0');
		ptr++;
	}
	if (endptr != NULL && *ptr == '\0')
		*endptr = (char *)str;
	else if (endptr != NULL)
		*endptr = (char *)ptr;
	return (sign * ret);
}
