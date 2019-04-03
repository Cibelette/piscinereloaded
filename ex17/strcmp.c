/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:36:59 by clagier           #+#    #+#             */
/*   Updated: 2019/04/02 15:05:08 by clagier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
	
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main()
{
	printf("%d\n", ft_strcmp("aaaaaaaaaaaaa", "aaaa"));
	return (0);
}
