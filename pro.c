/*
 * Author:zhangtao
 * Date & Time:2016年03月01日 19时21分03秒
 * Description:
 * */
#include<stdio.h>
int main(void)
{
    int p, c, m, T;
    p = 99;
    c = 99;
    m = 99;
    T = 99;
    if ((p > 50 || c > 50)&& m < 70)
        printf("Right");
    else
        printf("Wrong!");
    return 0;
}
