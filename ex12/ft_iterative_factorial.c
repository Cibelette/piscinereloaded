/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 17:45:02 by clagier           #+#    #+#             */
/*   Updated: 2019/04/01 18:03:00 by clagier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	
	if (nb > 12)
		return (0);
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
