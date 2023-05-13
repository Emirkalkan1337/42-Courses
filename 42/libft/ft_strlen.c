/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:24:22 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/03 16:10:07 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c)
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *str = "Hello, world!";
    int len = ft_strlen(str);
    printf("The length of \"%s\" is %d\n", str, len);
    return 0;
}*/