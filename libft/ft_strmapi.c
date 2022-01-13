/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:54:24 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:54:25 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*k;

	i = 0;
	if (!s)
		return (0);
	k = (char *)malloc(sizeof(char) *(ft_strlen(s) + 1));
	if (!k)
		return (0);
	while (s[i])
	{
		k[i] = f(i, s[i]);
		i++;
	}
	k[i] = '\0';
	return (k);
}
