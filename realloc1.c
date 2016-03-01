/*
 * Author:zhangtao
 * Date & Time:2016年02月29日 19时48分17秒
 * Description:
 * */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char *buffer;
    if ((buffer = (char *)malloc(10)) == NULL)
    {
        printf("No more space!");
        exit(1);
    }

    printf("Buffer os size %d created!", _msize(buffer));
    strcpy(buffer, "ZHAGNTAO");
    printf("\nBuffer contains:%s \n", buffer);

    if ((buffer = (char *)realloc(buffer, 15)) == NULL)
    {
        printf("No more space!");
        exit(1);
    }

    printf("\nBuffer size modified!");
    printf("\nBuffer still contained %s", buffer);
    strcpy(buffer, "OCCUPYTATION");
    printf("\nBuffer now contains: %s\n", buffer);
    return 0;
}
