/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:58:02 by albmarqu          #+#    #+#             */
/*   Updated: 2023/10/27 12:24:29 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char int2char(int num)
{
	char	nb;

	nb = num + '0';
	return nb;
}

void	ft_putnbr(int nb)
{
	int a;
	char ca;

	a = nb/10;
	ca = a;
	write (1, &ca, 2);
}

int	main(void)
{
	int	nb;

	nb = 42;
	ft_putnbr(nb);
	return (0);
}
