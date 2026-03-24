/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgomez- <frgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:58:16 by frgomez-          #+#    #+#             */
/*   Updated: 2026/03/24 08:53:34 by frgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	resu;

	i = 0;
	sign = 1;
	resu = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' )
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resu = resu * 10 + (str[i] - '0');
		i++;
	}
	return (resu * sign);
}

/*
int	main(void)
{
    char    *ej1;
    char    *ej2;
    char    *ej3;
    char    *ej4;
    char    *ej5;

    ej1 = "42";
    ej2 = "-42";
    ej3 = "  42";
    ej4 = "ab42c";
    ej5 = "";
    printf ("ft_atoi(\"%s\") = %d\n", ej1, ft_atoi(ej1));
    printf ("ft_atoi(\"%s\") = %d\n", ej2, ft_atoi(ej2));
    printf ("ft_atoi(\"%s\") = %d\n", ej3, ft_atoi(ej3));
    printf ("ft_atoi(\"%s\") = %d\n", ej4, ft_atoi(ej4));
    printf ("ft_atoi(\"%s\") = %d\n", ej5, ft_atoi(ej5));
    return (0);
}
*/