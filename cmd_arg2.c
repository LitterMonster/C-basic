/*
 * Author:zhangtao
 * Date & Time:2016年02月29日 18时51分32秒
 * Description:
 * */
#include<stdio.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    int i;
    char word[15];

    fp = fopen(argv[1], "w");
    printf("\nNo. of arguments in Command line = %d\n\n", argc);
    for (i = 2; i < argc; i++)
        fprintf(fp, "%s", argv[i]);
    fclose(fp);

    /*把文件内容显示到屏幕上*/
    printf("Connection of %s file\n\n", argv[1]);
    fp = fopen(argv[1], "r");
    for(i = 2; i < argc; i++)
    {
        fscanf(fp, "%s", word);
        printf("%s ", word);
    }

    fclose(fp);
    printf("\n\n");

    /*把文件中的内容写入到参数中*/
    for (i = 0; i < argc; i++)
    {
        printf("%*s \n", i*5, argv[i]);
    }
    return 0;
}
