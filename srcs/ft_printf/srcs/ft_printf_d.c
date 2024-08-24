/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 03:04:42 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/13 14:56:14 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_printf.h"

int	ft_printf_d(t_args *args)
{
	int	num;
	int	ret;

	ret = 0;
	num = va_arg(args->ap, int);
	ret += ft_putnbr_base(num, BASE_10);
	return (ret);
}
