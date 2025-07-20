/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mkstemp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 02:59:09 by kinamura          #+#    #+#             */
/*   Updated: 2025/07/20 14:30:22 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_mkstemp(char *template)
{
	int		fd;
	char	*temp_file;

	temp_file = ft_mktemp(template);
	fd = open(temp_file, O_RDWR | O_CREAT | O_EXCL, 0600);
	return (fd);
}
