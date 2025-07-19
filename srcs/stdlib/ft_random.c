/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:19:53 by kinamura          #+#    #+#             */
/*   Updated: 2025/07/20 00:40:43 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_random(void)
{
	static long	rand;
	int			stack;

	rand += (long)&stack;
	rand ^= rand << 13;
	rand ^= rand >> 17;
	rand ^= rand << 5;
	return (rand);
}
