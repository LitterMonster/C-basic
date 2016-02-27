/*
 * Author:zhangtao
 * Date & Time:2016年02月27日 15时28分07秒
 * Description:Testing array_pointer
 * */
#include<stdio.h>
#define ROW 3
#define COL 10
int main(void)
{
    int (*arrPtr)[COL] = NULL;
    int matrix[ROW][COL];

    arrPtr = matrix;
    int i, j;

    /* Input */
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            (*arrPtr)[j] = (i + 1) * (j + 1);
        }
        arrPtr++;
    }

    arrPtr = matrix;
    /* Output */
    printf("Version 1:\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d\t", (*arrPtr)[j]);
        }
        arrPtr++;
        printf("\n");
    }

    arrPtr = matrix;
    /* Output */
    printf("Version 2:\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d\t", *((*arrPtr)+j));
        }
        arrPtr++;
        printf("\n");
    }
}
