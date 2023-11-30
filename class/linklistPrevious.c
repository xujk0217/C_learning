#include<stdio.h>
#include<assert.h>
#include <stdlib.h>

typedef struct listnode
{
    int data;
    struct listnode *next;
    
}ListNode;

ListNode *genListNode(int data, ListNode *next){
    //新增 動態配置記憶體
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    assert(node != NULL);
    node->data = data;          //將資料傳入新記憶體
    node->next = next;          //將上一個資料記憶體的位址記錄下來
    return node;            //回傳新記憶體結構
}

void printLinkList(ListNode *node){
    while(node != NULL){
        printf("%d ", node->data);
        node = node->next;
    }
}
void freeLinkList(ListNode *node){
    while(node!=NULL){
        ListNode *next = node->next;           //先記下一個位址再釋放
        free(node);
        node = next;
    }
}
void insertLinkList(ListNode *node, int data){
    ListNode *prev = NULL;
    while(node != NULL && node->data > data){
        prev = node;
        node = node->next;
    }
    ListNode *insert_node = (ListNode *)malloc(sizeof(ListNode));
    insert_node->data = data;
    prev->next = insert_node;
    insert_node->next = node;
}

int main(){
    int arr[5] = {2, 4, 6, 7, 9};
    ListNode *head;
    ListNode *previous = NULL;          //上一個記憶體位置
    for(int i = 0; i < 5; i++){
        head = genListNode(arr[i], previous);           //創建、接收新記憶體結構
        previous = head;            //刷新上一個記憶體位置
    }
    insertLinkList(head, 5);
    printLinkList(head);
    freeLinkList(head);
}