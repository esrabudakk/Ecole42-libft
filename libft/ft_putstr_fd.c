/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:53:57 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:53:58 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	else
		write(fd, s, ft_strlen(s));
}

// int main()
// {
//     int fd;
//     fd = open("deneme.txt", 777);
//     char k[] = "bilgisayar"; 
//     ft_putstr_fd(k, fd);
// }