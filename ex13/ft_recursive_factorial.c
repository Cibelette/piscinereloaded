/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 10:18:36 by clagier           #+#    #+#             */
/*   Updated: 2019/04/02 11:06:24 by clagier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	if (nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
