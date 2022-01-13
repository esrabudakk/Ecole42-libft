/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:51:50 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:51:51 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*new_str;
	size_t			i;

	new_str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		new_str[i++] = 0;
	}
	s = new_str;
}
