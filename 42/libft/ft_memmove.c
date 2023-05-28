/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:13:48 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/19 12:52:49 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *destt = dest;
    const char *srcc = src;

    if (destt <= srcc) 
    {
        while (n--)
            *destt++ = *srcc++;
    } 
    else 
    {
        destt += n;
        srcc += n;
        while (n--)
            *--destt = *--srcc;
    }

    return (destt);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "hello world";
    char str2[] = "hey";
    
    printf("Before ft_memmove: str1 = %s, str2 = %s\n", str1, str2);

    // Move "world" from str1 to str2
    ft_memmove(str2, str1 + 6, 5);

    printf("After ft_memmove: str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}*/
