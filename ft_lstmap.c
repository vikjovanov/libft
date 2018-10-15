/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:46:32 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/10 20:09:07 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	if (lst == NULL || f == NULL)
		return (NULL);
	new = ft_lstnew(lst->content, lst->content_size);
	if (new == NULL)
		return (NULL);
	new = f(new);
	if (new == NULL)
		return (NULL);
	if (lst->next)
		new->next = ft_lstmap(lst->next, f);
	return (new);
}
