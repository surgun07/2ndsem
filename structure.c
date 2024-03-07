#include<stdio.h>
struct cse
{
    int roll;
    char name[20];
    float per;
};
int main()
{
    struct cse x;
    scanf("%d %s %f",&x.roll,&x.name,&x.per);
    printf("Roll of student is: %d\n",x.roll);
    printf("Name of the student is: %s\n",x.name);
    printf("Percentage of the student is: %f\n",x.per);
    return 0;
}