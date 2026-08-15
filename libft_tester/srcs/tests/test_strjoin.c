#include "../header.h"

void test_strjoin(int n)
{
    char *res;

    if (n == 382) { res = ft_strjoin("hello ", "world"); TEST_STR(res, "hello world"); free(res); }
    else if (n == 383) { res = ft_strjoin("", "test"); TEST_STR(res, "test"); free(res); }
    else if (n == 384) { res = ft_strjoin("test", ""); TEST_STR(res, "test"); free(res); }
    else if (n == 385) { res = ft_strjoin("", ""); TEST_STR(res, ""); free(res); }
    else if (n == 386) { res = ft_strjoin("42 ", "Firenze"); TEST_STR(res, "42 Firenze"); free(res); }
    else if (n == 387) { res = ft_strjoin("a", "b"); TEST_STR(res, "ab"); free(res); }
    else if (n == 388) { res = ft_strjoin(" ", " "); TEST_STR(res, "  "); free(res); }
    else if (n == 389) { res = ft_strjoin("abc", "defgh"); TEST_INT((int)strlen(res), 8); free(res); }
    else if (n == 390) { res = ft_strjoin("123", "456"); TEST_STR(res, "123456"); free(res); }
    else if (n == 391) { res = ft_strjoin("!", "?"); TEST_STR(res, "!?"); free(res); }
    else if (n == 392) { res = ft_strjoin("longlong", "string"); TEST_INT(res != NULL, 1); free(res); }
    else if (n == 393) { res = ft_strjoin("null\0", "test"); TEST_STR(res, "nulltest"); free(res); }
    else if (n == 394) { res = ft_strjoin("pre", "fix"); TEST_STR(res, "prefix"); free(res); }
    else if (n == 395) { res = ft_strjoin("s1", "s2"); TEST_INT(strcmp(res, "s1s2"), 0); free(res); }
    else if (n == 396) { res = ft_strjoin("final", "join"); TEST_STR(res, "finaljoin"); free(res); }
}
