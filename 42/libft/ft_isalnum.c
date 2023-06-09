/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:12:39 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/06 16:14:28 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
	return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

/*#include <stdio.h>

int ft_isalnum(int c);

int main(void) {
    int c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (ft_isalnum(c)) {
        printf("%c is alphanumeric\n", c);
    } else {
        printf("%c is not alphanumeric\n", c);
    }
    return 0;
}*/