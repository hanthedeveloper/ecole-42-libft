#include "header.h"


int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);

    int n = atoi(argv[1]);

    if (n <= 15) test_isalpha(n);
    else if (n <= 30) test_isdigit(n);
    else if (n <= 45) test_isalnum(n);
    else if (n <= 60) test_isascii(n);
    else if (n <= 75) test_isprint(n);
    else if (n <= 90) test_strlen(n);
    else if (n <= 115) test_memset(n);
    else if (n <= 130) test_bzero(n);
    else if (n <= 150) test_memcpy(n);
    else if (n <= 170) test_memmove(n);
    else if (n <= 190) test_strlcpy(n);
    else if (n <= 210) test_strlcat(n);
    else if (n <= 220) test_toupper(n);
    else if (n <= 230) test_tolower(n);
    else if (n <= 240) test_strchr(n);
    else if (n <= 250) test_strrchr(n);
    else if (n <= 265) test_strncmp(n);
    else if (n <= 280) test_memchr(n);
    else if (n <= 300) test_memcmp(n);
    else if (n <= 315) test_strnstr(n);
    else if (n <= 334) test_atoi(n);
    else if (n <= 345) test_calloc(n);
    else if (n <= 365) test_strdup(n);

    else if (n <= 381) test_substr(n);
    else if (n <= 396) test_strjoin(n);
    else if (n <= 411) test_strtrim(n);
    else if (n <= 436) test_split(n);
    else if (n <= 456) test_itoa(n);
    else if (n <= 476) test_strmapi(n);
    else if (n <= 496) test_striteri(n);
    else if (n <= 506) test_putchar_fd(n);
    else if (n <= 516) test_putstr_fd(n);
    else if (n <= 526) test_putendl_fd(n);
    else if (n <= 536) test_putnbr_fd(n);

    else if (n <= 546) test_lstnew(n);
    else if (n <= 556) test_lstadd_front(n);
    else if (n <= 566) test_lstsize(n);
    else if (n <= 576) test_lstlast(n);
    else if (n <= 586) test_lstadd_back(n);
    else if (n <= 596) test_lstdelone(n);
    else if (n <= 606) test_lstclear(n);
    else if (n <= 616) test_lstiter(n);
    else if (n <= 627) test_lstmap(n);

    else
        return (1);

    return (0);
}
