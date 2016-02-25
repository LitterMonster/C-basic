/*
 * Author:zhangtao
 * Date & Time:2016年02月25日 17时05分16秒
 * Description:
 * */
#include<stdio.h>
#define NUMBER 3
struct student
{
    char name[30];
    double number;
    int age;
};

int main(void)
{
    struct student students[NUMBER], *stu;
    printf("Begin input:\n");
    int i = 1;
    for(stu = students; stu < students + 3; stu++)
    {
        printf("Enter %d name:", i++);
        scanf("%s %lf %d", stu->name, &stu->number, &stu->age);
    }

    i = 1;
    for(stu = students; stu < students + 3; stu++)
    {
        printf("%d student's name is %s, number is %lf, age is %d\n",
               i++, stu->name, stu->number, stu->age);
    }

    double sum_number = 0;
    int sum_age = 0;

    for(stu = students; stu < students + 3; stu++)
    {
        sum_number += stu->number;
        sum_age += stu->age;
    }

    printf("Avg number is %lf\n", sum_number/NUMBER);
    printf("Avg age is %d\n", sum_age/NUMBER);

    return 0;
}
