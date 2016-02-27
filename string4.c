/*
 * Author:zhangtao
 * Date & Time:2016年02月27日 15时03分16秒
 * Description:
 * */
#include<stdio.h>
#include<string.h>
int main(void)
{
    char name[3][20];
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("Enter %d name:", i + 1);
        gets(name[i]);
    }

    /*
    for(i = 0; i < 3; i++)
    {
        printf("%d name is %s\n", i + 1, name[i]);
    }
    */
    
    printf("===============================");

    char *ptr[3] = name;
    for (i = 0; i < 3; i++)
    {
        printf("%d name is %s\n", i + 1, ptr + i);
    }
    return 0;
}
