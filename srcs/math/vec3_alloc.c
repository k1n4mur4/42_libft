/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_alloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 10:51:12 by kinamura          #+#    #+#             */
/*   Updated: 2025/12/29 12:15:07 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3	*vec3_alloc(void)
{
	t_vec3	*new;

	new = (t_vec3 *)ft_calloc(sizeof(t_vec3), 1);
	if (!new)
		return (NULL);
	new->x = 0;
	new->y = 0;
	new->z = 0;
	return (new);
}
