#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s1, len + 1);
	return (ret);
}

/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
    char *str1 = "Hello, world!";
    char *str2;

    str2 = ft_strdup(str1);
    printf("Original string: %s\n", str1);
    printf("Duplicated string: %s\n", str2);
    free(str2);
    return (0);
}*/