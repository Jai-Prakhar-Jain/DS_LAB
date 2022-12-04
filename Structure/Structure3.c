#include <stdio.h>
#include <string.h>
struct Student
{
    int Roll;
    char Name[50];
    int Age;
    char Address[100];
};
int main()
{
    struct Student S[15];
    int I = 1;
    for (I = 1; I <= 15; I++)
    {
        printf("Enter The Roll No. Of Student %d : ", I);
        scanf("%d", &S[I].Roll);
        printf("Enter The Name Of Student %d : ", I);
        scanf("%s", S[I].Name);
        printf("Enter The Age Of Student %d : ", I);
        scanf("%d", &S[I].Age);
        printf("Enter The Address Of Student %d : ", I);
        scanf("%s",S[I].Address);
    }
    for (I = 1; I <= 15; I++)
    {

        printf("\nRoll No Of Student %d Is ---> %d\n", I, S[I].Roll);
        printf("Name Of Student %d Is ---> %s\n", I, S[I].Name);
        printf("Age Of Student %d Is ---> %d\n", I, S[I].Age);
        printf("Marks Of Student %d Is ---> %s\n", I, S[I].Address);
    }
    return 0;
}