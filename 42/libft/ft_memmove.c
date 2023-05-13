void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *destt = (char *) dest;
    const char *srcc = (const char *) src;

    if (destt <= srcc) 
    {
        while (n--)
            *dest++ = *srcc++;
    } 
    else 
    {
        destt += n;
        srcc += n;
        while (n--)
            *--dest = *--srcc;
    }

    return dest;
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