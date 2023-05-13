/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:08:23 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/06 16:19:48 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while ((s1[i] != '\0' && i < n) || (s2[i] != '\0' && i < n))
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *s1 = "Hello";
    char *s2 = "Hello, world!";
    char *s3 = "World";
    int n = 5;

    printf("Comparing s1 and s2 for %d characters: %d\n", n, ft_strncmp(s1, s2, n));
    printf("Comparing s2 and s3 for %d characters: %d\n", n, ft_strncmp(s2, s3, n));
    printf("Comparing s3 and s1 for %d characters: %d\n", n, ft_strncmp(s3, s1, n));

    return 0;
}*/