#include <stdio.h>
#include <stdlib.h>
struct LinkedList
{
    int data;
    struct LinkedList *next;
};
void find(struct LinkedList *head)
{
    int x;
    printf("enter the data :");
    scanf("%d", &x);
    struct LinkedList *ptr = head;
    int i = 1;
    while (ptr->data != x && ptr->next != 0)
    {
        ++i;
        ptr = ptr->next;
    }
    if (ptr->data == x)
    {
        printf("element %d is present in index %d\n", x, i);
    }
    else
    {
        printf("element is not present in LinkedList\n");
    }
}
void trav(struct LinkedList *head)
{
    int i = 0;
    struct LinkedList *ptr = head;
    while (ptr != 0)
    {
        ++i;
        printf("element %d is %d\n", i, ptr->data);
        ptr = ptr->next;
    }
}
struct LinkedList *addend(struct LinkedList
                              *head)
{
    int x;
    printf("enter the data :");
    scanf("%d", &x);
    struct LinkedList *ptr = head;
    struct LinkedList *flot = (struct
                               LinkedList *)malloc(sizeof(struct LinkedList));
    flot->data = x;
    while (ptr->next != 0)
    {
        ptr = ptr->next;
    }
    flot->next = ptr->next;
    ptr->next = flot;
    return head;
}
struct LinkedList *add(struct LinkedList *head)
{
    int x, y;
    printf("enter the data :");
    scanf("%d", &x);
    printf("enter the position :");
    scanf("%d", &y);
    struct LinkedList *ptr = head;
    struct LinkedList *flot = (struct
                               LinkedList *)malloc(sizeof(struct LinkedList));
    flot->data = x;
    while (ptr->data != y)
    {
        ptr = ptr->next;
    }
    flot->next = ptr->next;
    ptr->next = flot;
    return head;
}
int main()
{
    struct LinkedList *a[20];
    struct LinkedList *head = (struct
                               LinkedList *)malloc(sizeof(struct LinkedList));
    struct LinkedList *ptr = head;
    head->data = 1;
    for (int i = 0; i < 9; i++)
    {
        a[i] = (struct LinkedList
                    *)malloc(sizeof(struct LinkedList));
        a[i]->data = (2 * i + i * i) + 2;
        ptr->next = a[i];
        ptr = ptr->next;
    }
    a[8]->next = 0;
    printf("Q1:- Element of linked list :\n");
    trav(head);
    printf("\nQ2:- Find the element present in linkedlist :\n");
    find(head);
    printf("\nQ3:- add an element at last in linkedlist :\n");
    head = addend(head);
    printf("Element added Successfully\n");
    printf("New elements of linked list :\n");
    trav(head);
    printf("\n add a new element at given index in linkedlist :\n");
    head = add(head);
    printf("Element added Successfully\n");
    printf("New elements of linked list :\n");
    trav(head);
    return 0;
}