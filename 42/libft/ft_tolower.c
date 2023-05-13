/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:31:03 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/06 13:32:49 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*#include <stdio.h>

int main(void)
{
	char c = 'A';
	printf("%c\n", ft_tolower(c)); // Output: a
	return 0;
}*/