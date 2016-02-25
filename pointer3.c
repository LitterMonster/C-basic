/*
 * Author:zhangtao
 * Date & Time:2016年02月25日 16时05分31秒
 * Description:
 * */
#include<stdio.h>
#include<string.h>
void sort(char *, char *);
int main(void)
{
    char a[20] = "Linus";
    char b[20] = "Tovarlds";
    printf("a is %s, b is %s\n", a, b);
    sort(a, b);
    printf("a is %s, b is %s\n", a, b);
    return 0;
}

void sort(char *str1, char *str2)
{
    char temp[20];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
