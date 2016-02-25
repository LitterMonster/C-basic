/*
 * Author:zhangtao
 * Date & Time:2016年02月25日 14时36分38秒
 * Description:
 * */
#include <stdio.h>
int main(void)
{
    char *str = "Admin";
    while (*str != '\0')
    {
        printf("%c\n", *str);
        str++;
    }
    /*
    char *name;
    int length;
    int i = 0;
    char *cptr;
    cptr = name;
    name = "GELHI";
    printf("name is %s\n", name);
    printf("cptr is %s\n", cptr);
    printf("%d is %c\n", i++, *(cptr++));
    printf("%d is %c\n", i++, *(cptr++));
    printf("%d is %c\n", i++, *(cptr++));
    printf("%d is %c\n", i++, *(cptr++));
    printf("%d is %c\n", i++, *(cptr++));
    while(*(name+i) != '\0')
    {
        printf("%c is stored \n", *(name+i));
        i++;
    }
    */

}
