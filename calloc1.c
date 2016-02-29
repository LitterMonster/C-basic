/*
 * Author:zhangtao
 * Date & Time:2016年02月29日 19时31分47秒
 * Description:Using calloc to dispatch more than one memory block
 * */
#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    char name[25];
    float age;
    long int id_num;
} record;

int main(void)
{
    int size;
    record *st_ptr, *temp;
    printf("Enter size of your class:");
    scanf("%d", &size);
    if ((st_ptr = (record *)calloc(size, sizeof(record))) == NULL)
    {
        printf("No more space!");
        exit(1);
    }

    /* Input */
    for (temp = st_ptr; temp < st_ptr + size; temp ++)
    {
        scanf("%s %f %ld", temp->name, &temp->age, &temp->id_num);
    }

    /* Output */

    for (temp = st_ptr; temp < st_ptr + size; temp ++)
    {
        printf("%s %f %ld\n", temp->name, temp->age, temp->id_num);
    }

    free(st_ptr);
    return 0;
}
