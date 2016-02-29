/*
 * Author:zhangtao
 * Date & Time:2016年02月29日 19时22分44秒
 * Description:
 * */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *p, *head;
    int size;
    printf("Enter size you want to input:");
    scanf("%d", &size);

    if ((p = (int *)malloc(size * sizeof(int))) == NULL)
    {
        printf("No more space!");
        exit(1);
    }

    /* Input */
    for(head = p; head < p + size; head++)
        scanf("%d", head);

    /* Output */
    for(head = p; head < p + size; head++)
        printf("%d\n", *head);
    
    return 0;
}
