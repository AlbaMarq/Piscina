/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:44:47 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/10 13:03:30 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int pow;

    pow = 1;
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    while (power > 0)
    {
        pow = pow * nb;
        power--;
    }
    return (pow);
}
/*
int main(void)
{
    printf("%d", ft_iterative_power(-4, 3));
    return (0);
}
*/