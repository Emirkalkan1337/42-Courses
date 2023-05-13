#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*haystack_tmp;
	char	*needle_tmp;
	size_t	i;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (!ft_strlen(haystack) || len < ft_strlen(needle))
		return (0);
	i = len - ft_strlen(needle) + 1;
	while (i-- && *haystack)
	{
		haystack_tmp = (char *)haystack;
		needle_tmp = (char *)needle;
		while (*needle_tmp && *needle_tmp == *haystack_tmp)
		{
			++haystack_tmp;
			++needle_tmp;
		}
		if (!*needle_tmp)
			return ((char *)haystack);
		++haystack;
	}
	return (0);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *haystack = "Hello, world!";
    char *needle = "world";
    char *result = ft_strnstr(haystack, needle, 13);
    if (result != NULL)
        printf("'%s' was found in '%s'\n", needle, haystack);
    else
        printf("'%s' was not found in '%s'\n", needle, haystack);
    return 0;
}*/