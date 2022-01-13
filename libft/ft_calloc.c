/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:52:31 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:52:32 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}

// int main(void)
// {
//     int *ip, id;
//     ip = (int *) ft_calloc(10, sizeof(int));
//     for (id=0; id<10; id++) {
//          *(ip+id) = (id+1) * 5;
//          printf("%p adresindeki değer: %d\n", (ip+id), *(ip+id));
//     }
//     free(ip);
// }