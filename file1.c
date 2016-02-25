/*
 * Author:zhangtao
 * Date & Time:2016年02月25日 20时11分28秒
 * Description:About file operation
 * */
#include<stdio.h>
#include<string.h>
int main(void)
{
    FILE *fp1, *fp2;
    fp1 = fopen("scores.c", "r");
    char c;
    while((c = getc(fp1)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp1);
    return 0;
}
