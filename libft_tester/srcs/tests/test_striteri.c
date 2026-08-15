#include "../header.h"

void striteri_func(unsigned int i, char *c) { (void)i; *c = *c + 1; }
void striteri_func_idx(unsigned int i, char *c) { *c = *c + i; }

void test_striteri(int n)
{
    char s1[] = "abc";
    char s2[] = "123";
    char s3[] = "AAAA";

    if (n == 477) { ft_striteri(s1, striteri_func); TEST_STR(s1, "bcd"); }
    else if (n == 478) { ft_striteri(s2, striteri_func); TEST_STR(s2, "234"); }
    else if (n == 479) { ft_striteri(s1, striteri_func_idx); TEST_STR(s1, "ace"); }
    else if (n == 480) { char s[] = ""; ft_striteri(s, striteri_func); TEST_STR(s, ""); }
    else if (n == 481) { char s[] = "hello"; ft_striteri(s, striteri_func); TEST_STR(s, "ifmmp"); }
    else if (n == 482) { char s[] = "42"; ft_striteri(s, striteri_func); TEST_STR(s, "53"); }
    else if (n == 483) { ft_striteri(s3, striteri_func_idx); TEST_STR(s3, "ABCD"); }
    else if (n == 484) { char s[] = "z"; ft_striteri(s, striteri_func); TEST_STR(s, "{"); }
    else if (n == 485) { char s[] = " "; ft_striteri(s, striteri_func); TEST_STR(s, "!"); }
    else if (n == 486) { char s[] = "test"; ft_striteri(s, striteri_func); TEST_INT(s[0] == 'u', 1); }
    else if (n == 487) { char s[] = "000"; ft_striteri(s, striteri_func_idx); TEST_STR(s, "012"); }
    else if (n == 488) { char s[] = "ABC"; ft_striteri(s, striteri_func); TEST_STR(s, "BCD"); }
    else if (n == 489) { char s[] = "9"; ft_striteri(s, striteri_func_idx); TEST_STR(s, "9"); }
    else if (n == 490) { char s[] = "single"; ft_striteri(s, striteri_func); TEST_INT(s[5] == 'f', 1); }
    else if (n == 491) { char s[] = "a"; ft_striteri(s, striteri_func_idx); TEST_STR(s, "a"); }
    else if (n == 492) { char s[] = "ab"; ft_striteri(s, striteri_func_idx); TEST_STR(s, "ac"); }
    else if (n == 493) { char s[] = "!!!"; ft_striteri(s, striteri_func); TEST_STR(s, "\"\"\""); }
    else if (n == 494) { char s[] = "111"; ft_striteri(s, striteri_func_idx); TEST_STR(s, "123"); }
    else if (n == 495) { char s[] = "xyz"; ft_striteri(s, striteri_func); TEST_STR(s, "yz{"); }
    else if (n == 496) { char s[] = "ok"; ft_striteri(s, striteri_func); TEST_STR(s, "pl"); }
}
