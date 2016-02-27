/*
 * Author:zhangtao
 * Date & Time:2016年02月27日 18时51分48秒
 * Description:
 * */
#include<stdio.h>
#include<math.h>

double Sum(double x, double y){return x + y;}
double Sub(double x, double y){return x - y;}
double Mul(double x, double y){return x * y;}
double Div(double x, double y){return x / y;}

typedef double func_t(double, double);
func_t *funcTables[4] = {Sum, Sub, Mul, Div};

char *msgTables[4] = {"Sum", "Difference", "Prodect", "Quotient"};

int main(void)
{
    int i;
    double x = 0, y = 0;

    printf("Enter two operands:\n");
    if((scanf("%lf %lf", &x, &y) != 2))
        printf("Invalid input.\n");

    for (i = 0; i < 4; i++)
        printf("%10s %6.2f\n", msgTables[i], funcTables[i](x, y));

}

