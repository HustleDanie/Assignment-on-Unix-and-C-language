#include <stdio.h>
#include <string.h>
// Write a C program that accepts the names of 10 studentstod

struct student
{
    char name[10];
    /* data */
};

int main()
{
    struct student s[10];
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter name:");
        scanf("%s", s[1].name);
    //for(int i=0;i<10;i++)
    printf("YOUR NAME IS:%s\t", s[1].name);
    }

    // for(int i=0;i<10;i++)
    //{
        //printf("%s\t", s[1].name);
    //}
    return 0;
}