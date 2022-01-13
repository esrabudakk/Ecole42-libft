/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:53:45 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:53:46 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}

// int main( void )
// {
//     char cdizi1[] = "Bilgisayar";
//     const char cdizi2[] = "Programlama";
//     memmove(cdizi1  , cdizi2, 11);
//     printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);
//            printf("*******************************\n");
//     char cdizi3[] = "Bilgisayar";
//     const char cdizi4[] = "Programlama";
//     ft_memmove(cdizi3  , cdizi4, 15);
//     printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi3, cdizi4);
//     return 0;
// }