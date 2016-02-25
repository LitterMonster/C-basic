/*
 * Author:zhangtao
 * Date & Time:2016年02月25日 14时15分53秒
 * Description:Get variables value through pointer
 * */
#include <stdio.h>
int main(void)
{
    int x, y;
    int *ptr;
    x = 10;
    y = *ptr;
    printf("Value of x is %d\n\n", x);
    printf("%d is stored ", x);
    printf("%d is stored ", *&x);
    printf("%d is stored ", *ptr);
    printf("%d is stored ", y);
    printf("%d is stored ", ptr);
    printf("%d is stored ", y);
    *ptr = 25;
    printf("\nNow x = %d\n", x);

}
