/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <emkalkan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:14:26 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/28 15:01:42 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ret;

	i = 0;
	while (*dst || i < dstsize)
	{
		++dst;
		++i;
	}
	ret = ft_strlcpy(dst, src, dstsize - i);
	return (ret + i);
}

/*#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char dst[10] = "hello";
	char *src = "world";
	size_t size = 10;
	size_t ret;

	ret = ft_strlcat(dst, src, size);
	printf("dst: %s\n", dst);
	printf("ret: %zu\n", ret);
	return (0);
}
*/
