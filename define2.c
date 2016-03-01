/*
 * Author:zhangtao
 * Date & Time:2016年03月01日 17时26分12秒
 * Description:
 * */
#include<stdio.h>
#define CUBE(x)    (x * x * x)
#define MAX(a, b)    (((a) > (b)) ? (a) : (b))
#define MIN(a, b)    (((a) < (b)) ? (a) : (b))
#define ABS(x)    (((x) > 0) ? (x) : (-x))
#define STREQ(s1, s2)    (strcmp ((s1,), (s2) == 0)
#define STRGT(s1, s2)    (strcmp ((s1,), (s2) > 0)
int main(void)
{
    printf("Result is %lf", CUBE(3.3));
    #undef CUBE
    return 0;
}
