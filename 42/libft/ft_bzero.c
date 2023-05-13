/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkalkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:51:27 by emkalkan          #+#    #+#             */
/*   Updated: 2023/05/09 19:19:22 by emkalkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, size_t n)
{
    void    *dest;

    dest = s;
    while (n--)
    {
        *((char *) s) = '\0';
        s++;
    }
    return (dest);
}

/*int main()
{
    char str[50] = "Hello World!";
    size_t len = strlen(str);

    printf("Before bzero: %s\n", str);
    ft_bzero(str, len);
    printf("After bzero: %s\n", str);

    return 0;
}*/