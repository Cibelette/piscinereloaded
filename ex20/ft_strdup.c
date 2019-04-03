/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:19:49 by clagier           #+#    #+#             */
/*   Updated: 2019/04/02 17:46:15 by clagier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*sdup;
	int		i;

	i = 0;
	if ((sdup = (char*) malloc(ft_strlen(src + 1) * sizeof(char))) == 0)
		return (0);
	while (src[i])
	{
		sdup[i] = src[i];
		i++;
	}
	sdup[i] = src[i];
	return (sdup);
}
