/*
 * Author:zhangtao
 * Date & Time:2016年02月27日 16时53分17秒
 * Description:
 * */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *getLine(void);
int str_compare(const void *, const void *);

#define LINES_MAX 1000
char *linePtr[LINES_MAX];

int main(void)
{
    int n = 0;
    for ( ; n < LINES_MAX && (linePtr[n] = getLine()) != NULL; ++n)
        ;
    if ( !feof(stdin) )
    {
        if (n == LINES_MAX)
            fputs("sorttext: too many lines.\n", stderr);
        else
            fputs("sorttext: error reading from stdin.\n", stderr);
    }
    else
    {
        qsort(linePtr, n, sizeof(char *), str_compare);
        for (char **p = linePtr; p < linePtr + n; ++p)
            puts(*p);
    }
    return 0;
}

#define LEN_MAX 512
char *getLine()
{
    char buffer[LEN_MAX], *linePtr = NULL;
    if (fgets(buffer, LEN_MAX, stdin) != NULL)
    {
        size_t len = strlen(buffer);
        
        if (buffer[len - 1] == '\n')
            buffer[len - 1] = '\0';
        else
            ++len;

        if ((linePtr = malloc(len)) != NULL)
            strcpy(linePtr, buffer);
    }
    return linePtr;
}

int str_compare(const void *p1, const void *p2)
{
    return strcmp(*(char **) p1, *(char **) p2);
}
