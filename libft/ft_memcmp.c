/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:53:39 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:57:04 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const unsigned char	*k;
	const unsigned char	*j;
	size_t				i ;

	i = 0;
	k = (const unsigned char *)ptr1;
	j = (const unsigned char *)ptr2;
	while (n--)
	{
		if (k[i] == j[i])
		{
			i++;
		}
		else
			return (-(j[i] - k[i]));
	}
	return (0);
}
// int main( void )
// {
//     const char *cp1 = "Bilgileri";
//     const char *cp2 = "Bilgileri";
//     int ret;
//     ret = ft_memcmp(cp1, cp2, 10);
//     if(ret<0) printf("cp1 bellek içeriği cp2 bellek içeriğinden küçüktür!");
//     else if(ret>0) printf("cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!");
//     else printf("cp1 bellek içeriği cp2 bellek içeriğine eşittir!");
//     printf(" \n  ");  
//     ret = memcmp(cp1, cp2, 10);
//     if(ret<0) printf("cp1 bellek içeriği cp2 bellek içeriğinden küçüktür!");
//     else if(ret>0) printf("cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!");
//     else printf("cp1 bellek içeriği cp2 bellek içeriğine eşittir!");
//     return 0;
// }
