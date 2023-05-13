/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:26:12 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/06 13:30:42 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c += 32);
	else
		return (c)
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char c = 'a';
    printf("Before: %c\n", c);
    c = ft_toupper(c);
    printf("After: %c\n", c);
    return 0;
}*/