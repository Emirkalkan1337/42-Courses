char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello, World!";
    char *result1 = ft_strchr(str, 'W');
    char *result2 = strchr(str, 'W');

    printf("My result: %s\n", result1);
    printf("Standard result: %s\n", result2);

    return 0;
}*/