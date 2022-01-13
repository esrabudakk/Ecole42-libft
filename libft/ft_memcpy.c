/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:53:42 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:56:37 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*k ;
	const char		*s;
	int				i;

	k = (unsigned char *)dest;
	s = (const char *)src;
	i = 0;
	if (s == NULL && k == NULL)
		return (NULL);
	while (n--)
	{
		k[i] = s[i];
		i++;
	}
	dest = k;
	return (dest);
}

// int main( void )
// {
//     char cp[12] = "ibrahimasd4";
//     //char dest[40]; 
//    // memset(dest, '\0', 15);
//     memcpy(cp + 3, cp, 7);
//     printf("%s\n", cp);
//     char cp2[12] = "ibrahimasd4";
//     //char dest2[40];

//     //memset(dest2, '\0', 15);
//     ft_memcpy(cp2 + 3, cp2, 7);
//     printf("%s\n", cp2);
//        return 0;
// }