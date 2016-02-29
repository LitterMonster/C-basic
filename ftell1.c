/*
 * Author:zhangtao
 * Date & Time:2016年02月29日 17时54分32秒
 * Description:Read file from a file
 * */
#include<stdio.h>
int main(void)
{
    FILE *fp;
    char c;

    fp = fopen("file1.c", "r");
    int char_num = 0;
    while( (c = getc(fp)) != EOF)
    {
        putchar(c);
        char_num++;
        if (char_num == 20)
        {
            long int tell = ftell(fp);
            printf("Tell is %ld\n", tell);
            rewind(fp);
        }
    }
    fclose(fp);
    printf("Length is %d\n", char_num);

    return 0;
}
