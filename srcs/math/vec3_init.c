/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 10:51:12 by kinamura          #+#    #+#             */
/*   Updated: 2025/12/29 10:51:15 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec3	*vec3_init(double x, double y, double z)
{
	t_vec3	*new;

	new = (t_vec3 *)ft_calloc(sizeof(t_vec3), 1);
	if (!new)
		return (NULL);
	new->x = x;
	new->y = y;
	new->z = z;
	return (new);
}
