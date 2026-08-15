#include "../header.h"

static int g_cnt = 0;
static void del_t(void *c) { free(c); g_cnt++; }

void test_lstdelone(int n)
{
    g_cnt = 0;
    if (n == 587) { t_list *l = ft_lstnew(malloc(1)); ft_lstdelone(l, free); TEST_INT(1, 1); }
    else if (n == 588) { t_list *l = ft_lstnew(malloc(1)); ft_lstdelone(l, del_t); TEST_INT(g_cnt, 1); }
    else if (n == 589) { ft_lstdelone(NULL, free); TEST_INT(1, 1); }
    else if (n == 590) { t_list *l = ft_lstnew(malloc(1)); void *saved = l->content; ft_lstdelone(l, NULL); free(saved); TEST_INT(1, 1); }
    else if (n == 591) { t_list *l1 = ft_lstnew(malloc(1)); t_list *l2 = ft_lstnew(malloc(1)); l1->next = l2; ft_lstdelone(l1, del_t); TEST_INT(l2->content != NULL, 1); free(l2->content); free(l2); }
    else if (n == 592) { t_list *l = ft_lstnew(NULL); ft_lstdelone(l, del_t); TEST_INT(g_cnt, 1); }
    else if (n == 593) { int *c = malloc(sizeof(int)); *c = 42; t_list *l = ft_lstnew(c); ft_lstdelone(l, del_t); TEST_INT(g_cnt, 1); }
    else if (n == 594) { t_list *l = ft_lstnew(malloc(10)); ft_lstdelone(l, del_t); TEST_INT(g_cnt, 1); }
    else if (n == 595) { char *s = ft_strdup("dup"); t_list *l = ft_lstnew(s); ft_lstdelone(l, del_t); TEST_INT(g_cnt, 1); }
    else if (n == 596) { t_list *l = ft_lstnew(malloc(1)); l->next = NULL; ft_lstdelone(l, del_t); TEST_INT(g_cnt, 1); }
}
