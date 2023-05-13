/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:32:41 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/09 15:17:59 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t n)
{
	void	*dest;

	dest = b;
	while (n--)
	{
		*((char *) b) = (unsigned char) c;
		b++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50] = "Hello, World!";

    printf("Before memset(): %s\n", str);

    ft_memset(str, '*', 6);

    printf("After memset(): %s\n", str);

    return 0;
}*/