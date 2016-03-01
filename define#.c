/*
 * Author:zhangtao
 * Date & Time:2016年03月01日 19时01分20秒
 * Description:
 * */
#include<stdio.h>
#define sum(xy) printf(#xy " = %d\n", xy)
int main(void)
{
    int a, b;
    a = 90;
    b = 87;
    sum(a + b);
    printf("Hello " " World");
    return 0;
}
