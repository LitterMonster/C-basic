/*
 * Author:zhangtao
 * Date & Time:2016年02月27日 18时39分19秒
 * Description:Testing function pointer 2
 * */
#include<stdio.h>
#define PI 3.1415926
double function(double pi, double r)
{
    return 4 * pi * r * r / 3;
}

int main(void)
{
    double (*area)(double, double) = function;
    double radius;

    printf("Enter radius:\n");
    scanf("%lf", &radius);
    printf("Area_1 is %lf\n", (*area)(PI, radius));
    printf("Area_2 is %lf\n", area(PI, radius));
    return 0;
}
