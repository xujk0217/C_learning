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
    int i = 0;
    int array[1000];
    while (head->next != NULL)
    {
        array[i] = head->val;
        head = head->next;
        i += 1;
    }
    array[i] = head->val;

    struct ListNode *newHead = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *current = newHead;

    //if (i % 2 == 0)
    //{
        newHead->val = array[0];
        for (int x = 2; x <= i; x += 2)
        {
            current->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            current = current->next;
            current->val = array[x];
        }
        for (int x = 1; x <= i; x += 2)
        {
            current->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            current = current->next;
            current->val = array[x];
        }
    //}
    /*else
    {
        newHead->val = array[1];
        for (int x = 3; x <= i; x += 2)
        {
            current->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            current = current->next;
            current->val = array[x];
        }
        for (int x = 0; x <= i; x += 2)
        {
            current->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            current = current->next;
            current->val = array[x];
        }
    }
    */
    // 將新鏈表的最後一個節點的 next 設為 NULL
    current->next = NULL;
    // 返回新的鏈表頭
    return newHead;
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