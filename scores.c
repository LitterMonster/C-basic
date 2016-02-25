/*
 * Author:zhangtao
 * Date & Time:2016年02月25日 19时07分57秒
 * Description:
 * */
#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 4
#include <string.h>

void swap_string(char s1[], char s2[]);
void swap_int(int *p, int *q);
void print_list(char *string [], int array[][SUBJECTS+1], int m, int n);
void get_rank_list(char *string [], int array[][SUBJECTS+1], int m, int n);
void get_sum(int array[][SUBJECTS+1], int m, int n);
void get_list(char *string[], int array [][SUBJECTS+1], int m, int n);
int main(void)
{
    char name[STUDENTS][20];
    int marks[STUDENTS][SUBJECTS+1];

    printf("Input students names & their marks in four SUBJECTS\n");
    get_list(name, marks, STUDENTS, SUBJECTS+1);
    printf("\n");
    printf_list(name, marks, STUDENTS, SUBJECTS+1);
    get_rank_list(name, marks, STUDENTS, SUBJECTS+1);
    printf("\nRanked List\n\n");
    print_list(name, marks, STUDENTS, SUBJECTS+1);
}
/**
 * 输入学生名和成绩
 **/
void get_list(char *string[], int array [][SUBJECTS+1], int m, int n) {
    int i, j, (*rowptr)[SUBJECTS+1] = array;
    for(i = 0; i < m; i++)
    {
        scanf("%s", string[i]);
        for(j = 0; j < SUBJECTS + 1; j++)
            scanf("%d", &(*(rowptr + i))[j]);
    }
}

/**
 * 计算每个学生的总分
 * */
void get_sum(int array[][SUBJECTS+1], int m, int n)
{
    int i, j, (*rowptr)[SUBJECTS+1] = array;
    for(i = 0; i < m; i++)
    {
        (*(rowptr + i))[n -1] = 0;
        for(j = 0; j < n - 1; j++)
            (*(rowptr + i))[n - 1] += (*(rowptr + i))[j];
    }
}

/**
 * 准备基于总分的排名表
 */
void get_rank_list(char *string [], int array[][SUBJECTS+1], int m, int n)
{
    int i, j, k, (*rowptr)[SUBJECTS+1] = array;
    char *temp;

    for(i = 0; i <= m - 1; i++)
        for(j = 1; j <= m - i; j++)
            if ((*(rowptr + j - 1))[n - 1] < (*(rowptr + j))[n - 1])
            {
                swap_string(string[j - 1], string[j]);

                for(k = 0; k < n; k++)
                    swap_int(&(*(rowptr + j - 1))[k], &(*(rowptr + j))[k]);
            }
}

/**
 * 显示排名表
 */
void print_list(char *string[], int array[][SUBJECTS+1], int m, int n)
{
    int i, j, (*rowptr)[SUBJECTS+1] = array;
    for(i = 0; i < m; i++)
    {
        printf("%-20s", string[i]);
        for(j = 0; j < n; j++)
            printf("%5d", (*(rowptr + i))[j]);
        printf("\n");
    }
}

/**
 * 整数值的交换
 */
void swap_int(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

/**
 * 字符串交换
 */
void swap_string(char s1[], char s2[])
{
    char swaparea[256];
    int i;
    for(i = 0; i < 256; i++)
        swaparea[i] = '\0';
    i = 0;
    while(s1[i] != '\0' && i < 256)
    {
        swaparea[i] = s1[i];
        i++;
    }
    i = 0;
    while(s2[i] != '\0' && i < 256)
    {
        s1[i] = s2[i];
        s1[++i] = '\0';
    }
    i = 0;
    while(swaparea[i] != '\0')
    {
        s2[i] = swaparea[i];
        s2[++i] = '\0';
    }
}

/**
 * 另一种方法
 *
void swap_string(char *s1, char *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i = 0;
    char temp[256];
    for (i; i < 256; i++)
    {
        temp[i] = '\0';
    }

    if (len1 <= len2)
    {
        strcpy(temp, s2);
        strcpy(s2, s1);
        strcpy(s1, temp);
    } else {
        strcpy(temp, s1);
        strcpy(s1, s2);
        strcpy(s2, temp);
    }
}
*/


