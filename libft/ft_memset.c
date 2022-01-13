/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:53:47 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:53:49 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (s);
}

// int main( void )
// {
//     char cdizi[] = "Bilgisayar";
//     printf("cdizi bellek içeriği: %s\n", cdizi);
//     ft_memset(cdizi, 'x', 10);
//     printf("cdizi bellek içeriği: %s", cdizi);
//     return 0;
// }