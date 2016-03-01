/*
 * Author:zhangtao
 * Date & Time:2016年03月01日 18时19分41秒
 * Description:
 * */
#include<stdio.h>
#include "static.c"
#include "test.c"
#define M 100
#ifndef TEST
#define TEST 2000
#endif
#ifndef STATIC
#define STATIC 1000
#endif
#if !defined (HELLO)
#error NO HELLO WORLD
#endif
int main(void)
{
    //in_static();
    //in_test();
    printf("STATIC is %d\n", STATIC); 
    printf("TEST is %d\n", TEST); 
    printf("TEMP is %d\n", TEMP); 
    #ifdef ANOTHER
    {
        printf("Another's value is %d\n", ANOTHER);
    }
    #else
    {
        printf("No define ANOTHER");
    }
    #endif

    #if LAST  == 824
        printf("Right!");
    #else
        printf("Wrong!");
    #endif


    return 0;
}
