/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebudak <ebudak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:53:31 by ebudak            #+#    #+#             */
/*   Updated: 2022/01/13 02:53:32 by ebudak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*root;

	root = (t_list *) malloc(sizeof(t_list));
	if (!(root))
	{
		return (0);
	}
	root->content = content;
	root->next = NULL;
	return (root);
}

// int		main(void)
// {
// 	char	str[] = "lorem ipsum dolor sit";
// 	t_list	*elem;
// 	elem = ft_lstnew((void *)str);
// 	printf("\n%s\n", elem->content);
// }
