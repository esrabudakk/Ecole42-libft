/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:54:29 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:54:30 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*str2 == '\0' || str2 == NULL)
		return ((char *) str1);
	while (str1[i] != '\0' && i < n)
	{
		j = 0;
		while (str2[j] == str1[i + j] && i + j < n)
		{
			if (str2[j + 1] == '\0')
			{
				return ((char *)str1 + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char *cp1 = "Bilgisayar";
//     const char *cp2 = "ilgi";
//     char *ret = strnstr(cp1, cp2,10);
//     char *ret1 = ft_strnstr(cp1, cp2,10);
//    printf("%ld \n",ret - cp1);
//     printf("%s \n",ret1);
//     return 0;
// }