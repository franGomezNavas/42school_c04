/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:18:44 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/23 12:24:11 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	num;
	char	c;

	num = (long)nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr((num / 10));
	}
	c = (num % 10) + '0';
	write(1, &c, 1);
}

/*
int main(void)
{
    int ej1;
    int ej2;
    int ej3;

    ej1 = -5;
    ej2 = 0;
    ej3 = 5;
    ft_putnbr(ej1);
    printf ("\n");
    ft_putnbr(ej2);
    printf ("\n");
    ft_putnbr(ej3);
    printf ("\n");
    return (0);
}
*/
