/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:22:51 by zlee              #+#    #+#             */
/*   Updated: 2024/12/16 14:58:46 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (!s)
		return ;
	count = ft_strlen(s);
	write(fd, s, count);
}

/*int	main(void)*/
/*{*/
/*	ft_putstr_fd("Hello World\n", 1);*/
/*}*/
