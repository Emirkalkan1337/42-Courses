/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:27:56 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/06 16:31:54 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str) {
    
	int result = 0;
	int sign = 1;

	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9') 
	{
        result = result * 10 + (*str - '0');
        str++;
    }
    return (sign * result);
}

/*#include <stdio.h>

int atoi(const char *str);

int main(void) {
    const char *str = "   -12345";
    int result = atoi(str);

    printf("The string \"%s\" as an integer is %d\n", str, result);

    return 0;
}*/