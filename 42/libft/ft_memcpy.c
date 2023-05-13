/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:40:53 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/11 15:40:56 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *my_memcpy(void *restrict dest, const void *restrict src, size_t n) 
{
    char *destt = (char *) dest;
    const char *srcc = (const char *) src;

    while (n--)
    {
        *destt++ = *srcc++;
    }
    return dest;
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello";
    char str2[20];

    // Copy str1 to str2
    my_memcpy(str2, str1, strlen(str1) + 1);

    // Print str2
    printf("%s\n", str2);

    return 0;
}*/