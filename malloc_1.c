/*
 * Author:zhangtao
 * Date & Time:2016年02月29日 19时14分07秒
 * Description:Using malloc to dispatch space
 * */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *p, *table;
    int size;
    printf("\n What is the size of table?");
    scanf("%d", &size);
    printf("\n");
    
    if ((table = (int *)malloc(size * sizeof(int))) == NULL)
    {
        printf("No space available. \n");
        exit(1);
    }

    printf("\n Address of the first byte is %u\n", table);
    
    printf("\nInput table values:\n");

    for (p = table; p < table + size; p++)
        scanf("%d", p);

    for (p = table + size - 1; p >= table; p--)
        printf("%d is stored at address %u\n", *p, p);
    return 0;
}
