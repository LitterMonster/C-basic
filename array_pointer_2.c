/*
 * Author:zhangtao
 * Date & Time:2016年02月27日 15时52分26秒
 * Description:Add array_pointer exercises
 * */
#include<stdio.h>
typedef int ARRAY_t[10];
int main(void)
{
    ARRAY_t a, *arrPtr;
    int i;
    
    for (i = 0; i < 10; i++)
        scanf("%d", a+i);

    /* Output */
    for (i = 0; i < 10; i++)
        printf("%d\n", *(a+i));

    arrPtr = (ARRAY_t *)a;

    return 0;
}
