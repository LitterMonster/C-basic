/*
 * Author:zhangtao
 * Date & Time:2016年02月25日 15时10分19秒
 * Description:
 * */
#include <stdio.h>
int main(void)
{
    char *c = "Hello";
    for(char *p = c; *p != '\0'; p++)
    {
        printf("p is %c\n", *p);
    }
    printf("C is %s\n", c);
    return 0;
}
