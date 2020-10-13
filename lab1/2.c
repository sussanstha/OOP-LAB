#include<stdio.h>

struct student
{
    char name[20], address[20];
    int roll, marks;
}s[10];

int main()
{
    int i=0,n=0;
    printf("Enter no. of students: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter name, roll, marks and address: ");
        scanf("%s%d%d%s", &s[i].name, &s[i].roll, &s[i].marks, &s[i].address);
    }

    for(i=0; i<n; i++)
    {
        printf("The details of students are: \n");
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %d\n", s[i].marks);
        printf("Address: %s\n", s[i].address);
    }
    return 1;
}
