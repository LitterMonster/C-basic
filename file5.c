/*
 * Author:zhangtao
 * Date & Time:2016年02月25日 21时18分55秒
 * Description:
 * */
#include<stdio.h>
int main(void)
{
    //FILE *fp = fopen("new", "w");
    //putw(100, fp);
    //printf("Write successfuly!");
    fprintf(stdout, "My name is Zhangtao");
    int a, b;
    fscanf(stdin, "%d %d", &a, &b);
    fprintf(stdout, "%d and %d\n", a, b);
    /*
    fclose(fp);
    fp = fopen("new", "r");
    int num = getw(fp);
    printf("%d\n", num);
    fclose(fp);
    */
}
