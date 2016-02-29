/*
 * Author:zhangtao
 * Date & Time:2016年02月29日 18时12分32秒
 * Description:How to use arguments in command line
 * */
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int i;
    /* Version1 */
    printf("Version1\n");
    char **head = argv;
    for (head; *head != '\0'; head++)
        printf("arguments is %s\n", *head);

    /* Version2 */
    printf("Version2\n");
    for (i = 0; i < argc; i++)
    {
        printf("%d arguments is %s\n", i + 1, argv[i]);
    }
    return 0;
}
