#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *oddEvenList(struct ListNode *head);

struct ListNode *oddEvenList(struct ListNode *head)
{
    
}
    void Construct(struct ListNode * node, int length, int num)
    {
        int a;
        scanf("%d", &a);
        node->val = a;

        if (num >= length)
        {
            node->next = NULL;
            return;
        }
        node->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        num++;
        Construct(node->next, length, num);
    }

    int main()
    {
        struct ListNode *head;
        int n, a, length;
        head = (struct ListNode *)malloc(sizeof(struct ListNode));
        scanf("%d", &n);
        while (n--)
        {
            scanf("%d", &length);
            Construct(head, length, 1);
            struct ListNode *ans = oddEvenList(head);
            struct ListNode *ptr;

            ptr = ans;

            while (ptr != NULL)
            {
                printf("%d ", ptr->val);
                ptr = ptr->next;
            }
            printf("\n");
        }
    }