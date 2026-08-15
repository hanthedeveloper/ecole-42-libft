#include "../header.h"

void test_lstsize(int n)
{
    t_list *l1 = ft_lstnew("1");
    t_list *l2 = ft_lstnew("2");
    t_list *l3 = ft_lstnew("3");

    if (n == 557) TEST_INT(ft_lstsize(NULL), 0);
    else if (n == 558) TEST_INT(ft_lstsize(l1), 1);
    else if (n == 559) { l1->next = l2; TEST_INT(ft_lstsize(l1), 2); }
    else if (n == 560) { l1->next = l2; l2->next = l3; TEST_INT(ft_lstsize(l1), 3); }
    else if (n == 561) { t_list *head = ft_lstnew("h"); t_list *cur = head; int i = 0; while (i < 49) { cur->next = ft_lstnew("x"); cur = cur->next; i++; } TEST_INT(ft_lstsize(head), 50); ft_lstclear(&head, NULL); }
    else if (n == 562) { t_list *tmp = ft_lstnew(0); TEST_INT(ft_lstsize(tmp), 1); free(tmp); }
    else if (n == 563) { l1->next = l2; l2->next = l3; TEST_INT(ft_lstsize(l2), 2); }
    else if (n == 564) { l1->next = l2; l2->next = l3; TEST_INT(ft_lstsize(l3), 1); }
    else if (n == 565) { t_list *empty = NULL; TEST_INT(ft_lstsize(empty), 0); }
    else if (n == 566) { l1->next = l2; l2->next = NULL; TEST_INT(ft_lstsize(l1), 2); }

    if (l1) { if (l1->next == l2) l1->next = NULL; free(l1); }
    if (l2) { if (l2->next == l3) l2->next = NULL; free(l2); }
    if (l3) free(l3);
}
