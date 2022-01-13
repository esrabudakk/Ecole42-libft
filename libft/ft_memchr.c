/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:53:36 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:53:38 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const char	*k;
	int			i;

	k = (const char *)ptr;
	i = 0;
	while (n--)
	{
		if (k[i] == (char)c)
		{
			return ((void *)&ptr[i]);
		}
		else
			i++;
	}
	return (0);
}

// int main( void )
// {
//     const char *cp = "Bilgisayar";
//     const char cd = 'g';

// printf("%c karakterinin bellek adresi: %p\n", cd, memchr(cp, cd, strlen(cp)));
// printf("%c karakterinin bellek adresi: %p\n", cd, ft_memchr(cp, cd, strlen(cp)));

//     return 0;
// }
