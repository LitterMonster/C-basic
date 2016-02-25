/*
 * Author:zhangtao
 * Date & Time:2016年02月25日 20时20分23秒
 * Description:
 * */
#include<stdio.h>
int main(void)
{
    FILE *f1;
    char c;
    printf("Data Input\n\n");
    f1 = fopen("README.md", "w");
    while((c = getchar()) != EOF)
        putc(c, f1);
    fclose(f1);

    printf("\nData Output\n\n");
    f1 = fopen("file1.c", "r");
    while((c = getc(f1)) != EOF)
        printf("%c", c);
    fclose(f1);
}
