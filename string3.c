/*
 * Author:zhangtao
 * Date & Time:2016年02月25日 15时45分16秒
 * Description:
 * */
#include<stdio.h>
int main(void)
{
    char *name[3] = {
        "New Zealand",
        "Austrial",
        "India",
    };

    int i = 0;
    for (i; i <= 2; i++)
    {
        //printf("%s\n", name[i]);
        int len = 0;
        int j = 0;
        while(*(name[i]+len) != '\0')
        {
            len++;
        }
        for (j; j < len; j++)
        {
            printf("%s %d character is %c\n", name[i], j, *(name[i]+j));
        }
    }
    
}
