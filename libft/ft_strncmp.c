/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:54:26 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:54:28 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i <= n)
	{
		if (str1[i] == 0 && str2[i] != 0)
			return (-1);
		if (n != 0)
		{
			while (i < (n - 1) && str1[i] != '\0'
				&& str2[i] != '\0' && str1[i] == str2[i])
				i++;
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     const char *cp1 = "";
//     const char *cp2 = "b";
//     int ret;
//     ret = strncmp(cp1, cp2, 0);
//     if(ret<0) printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür!\n");
//     else if(ret>0) printf("cp2 karakter dizisi cp1 karakter dizisinden küçüktür!");
//     else printf("cp1 karakter dizisi cp2 karakter dizisine eşittir!");
//     printf("**************************************\n");
//     const char *cp3 = "";
//     const char *cp4 = "b";
//     int ret2;
//     ret2 = ft_strncmp(cp3, cp4, 0);
//     if(ret2<0) printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür!\n");
//     else if(ret2>0) printf("cp2 karakter dizisi cp1 karakter dizisinden küçüktür!");
//     else printf("cp1 karakter dizisi cp2 karakter dizisine eşittir!");
//     return 0;
// }
