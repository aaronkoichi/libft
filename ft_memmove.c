/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlee <zlee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:52:03 by zlee              #+#    #+#             */
/*   Updated: 2024/11/07 08:04:02 by zlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				count;
	unsigned char	*initial_d;
	unsigned char	*initial_s;

	count = 0;
	initial_d = (unsigned char *)dest;
	initial_s = (unsigned char *)src;
	if (src < dest)
	{
		count = (int)n - 1;
		while (count >= 0)
		{
			initial_d[count] = initial_s[count];
			count--;
		}
	}
	else if (src > dest)
	{
		while ((size_t)count < n)
		{
			initial_d[count] = initial_s[count];
			count++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[] = "Hello Wurld!";
	printf("%s\n", string);
	ft_memmove(string + 3, string, 5);
	printf("%s\n", string);
}
*/
