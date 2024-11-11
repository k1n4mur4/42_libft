/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 00:25:40 by kinamura          #+#    #+#             */
/*   Updated: 2024/11/11 15:50:28 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "libft.h"
# include "ft_printf.h"

void	ft_exit_message(int status, const char *format, ...);
int		ft_fopen(char *filename, const char *mode);

#endif