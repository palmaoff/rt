/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdcnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperseus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:33:35 by mperseus          #+#    #+#             */
/*   Updated: 2019/09/20 21:34:40 by mperseus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wrdcnt(char const *s, char c)
{
	int wrd;

	wrd = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			wrd++;
		while (*s && *s != c)
			s++;
	}
	return (wrd);
}