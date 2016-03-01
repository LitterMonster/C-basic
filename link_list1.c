/*
 * Author:zhangtao
 * Date & Time:2016年03月01日 16时24分11秒
 * Description:Using link list
 * */
#include<stdio.h>
#include<stdlib.h>
typedef struct item
{
    int number;
    struct item *next;
} node;
void input(node *);
void print(node *);
int count(node *);

int main(void)
{
    node *head;
    head = (node *) malloc(sizeof(node));
    input(head);
    printf("\n");
    print(head->next);
    printf("\n");
    printf("\nNumber of items = %d\n", count(head));
}


void input(node *list)
{
    printf("Enter number(-999 to exit!)");
    scanf("%d", &list->number);
    if (list->number == -999)
    {
        list->next = NULL;
    } else {
        list->next = (node *)malloc(sizeof(node));
        input(list->next);
    }
    return;
}

void print(node *list)
{
    if (list->next != NULL)
    {
        printf("%d->", list->number);
        if (list->next->next == NULL)
            printf("%d", list->next->number);
        print(list->next);
    }
    return;
}

int count(node *list)
{
    if (list->next == NULL)
        return 0;
    else 
        return (1 + count(list->next));
}

