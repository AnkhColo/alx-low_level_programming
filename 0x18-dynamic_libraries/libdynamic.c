#include "main.h"

int _putchar(char c)
{
    putchar(c);
    return (0);
}

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int _abs(int n)
{
    if (n < 0)
    {
        return (n * -1);
    }
    else
    {
        return (n);
    }
}
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
 
    {
        return (0);
    }
}

int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
int _strlen(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }
    return (len);
}

void _puts(char *s)
{
    while (*s != '\0')
    {
        _putchar(*s);
        s++;
    }
    _putchar('\n');
}
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int _atoi(char *s)
{
    int sign = 1, i = 0, num = 0;

    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }
    while (s[i] != '\0')
    {
        if (!isdigit(s[i]))
        {
            return (num * sign);
        }
        num = (num * 10) + (s[i] - '0');
        i++;
    }
    return (num * sign);
}

char *_strcat(char *dest, char *src)
{
    int len = _strlen(dest);
    int i = 0;

    while (src[i] != '\0')
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}

char *_strncat(char *dest, char *src, int n)
{
    int len = _strlen(dest);
    int i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}

char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int _strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (s1[i] - s2[i]);
}
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        s[i] = b;
    return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        dest[i] = src[i];
    return (dest);
}

char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return (s);
        s++;
    }
    if (*s == c)
        return (s);
    return (NULL);
}

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i;

    for (i = 0; *s; s++)
    {
        for (i = 0; *(accept + i); i++)
        {
            if (*s == *(accept + i))
                break;
        }
        if (!*(accept + i))
            break;
    }
    return (s - accept);
}

char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *a = accept;

        while (*a)
        {
            if (*s == *a++)
                return (s);
        }
        s++;
    }
    return (NULL);
}

char *_strstr(char *haystack, char *needle)
{
    char *s, *p;

    if (*needle == '\0')
        return (haystack);
    for (; (s = _strchr(haystack, *needle)) != NULL; haystack = s + 1)
    {
        for (p = needle + 1; *p && *s == *p; s++, p++)
            ;
        if (*p == '\0')
            return (s - _strlen(needle));
    }
    return (NULL);
}
