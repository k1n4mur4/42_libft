/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_large_x.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 03:04:48 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/13 14:56:20 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_printf.h"

int	ft_printf_large_x(t_args *args)
{
	int				ret;
	unsigned int	num;

	ret = 0;
	num = va_arg(args->ap, unsigned long long);
	ret += ft_putunbr_base(num, BASE_TOP_16);
	return (ret);
}
