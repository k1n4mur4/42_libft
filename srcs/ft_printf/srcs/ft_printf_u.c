/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 03:04:57 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/13 14:56:44 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_printf.h"

int	ft_printf_u(t_args *args)
{
	int				ret;
	unsigned int	num;

	ret = 0;
	num = va_arg(args->ap, unsigned int);
	ret += ft_putunbr_base(num, BASE_10);
	return (ret);
}
