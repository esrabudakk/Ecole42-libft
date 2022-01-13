/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:54:06 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:54:08 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *str)
{
	char	*new_str;
	int		i ;

	i = 0;
	new_str = (char *)malloc(ft_strlen((const char *) str) + 1);
	if (new_str == NULL)
		return (NULL);
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

//int main( void )
// {
//     const char *cp1 = "Bilgisayar";
//     char *cp2 = strdup(cp1);

//     printf("İlk karakter dizisi: %s\n", cp1);
//     printf("Benzer olarak oluşturulan karakter dizisi: %s", cp2);

//     return 0;
// }
