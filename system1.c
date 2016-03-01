/*
 * Author:zhangtao
 * Date & Time:2016年03月01日 19时34分06秒
 * Description:
 * */
#include<stdio.h>
#include<string.h>
int main(void)
{
    if (system("touch temp.sys") != 0)
        printf("Wrong!");
    else
        printf("Congrautions!");
    return 0;
}
