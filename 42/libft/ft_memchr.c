#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		++s;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main(void)
{
    char str[] = "Hello, world!";
    char *ptr;

    // Search for the first occurrence of 'o' in the string
    ptr = (char *)ft_memchr(str, 'o', strlen(str));
    if (ptr != NULL) {
        printf("Found at position: %ld\n", ptr - str);
    } else {
        printf("Not found.\n");
    }

    return 0;
}*/