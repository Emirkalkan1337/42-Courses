/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:14:44 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/18 19:14:45 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ret = (char *)s;
		++s;
	}
	if (!c)
		ret = ((char *)s);
	return (ret);
}
/*#include <stdio.h>
#include "libft.h"

int main()
{
    char str[] = "hello world";
    char c = 'o';
    char *result;

    result = ft_strrchr(str, c);
    if (result)
        printf("'%c' found at position %ld\n", c, result - str);
    else
        printf("'%c' not found\n", c);

    return 0;
}*/
