#include <stdio.h>
#include <string.h>
struct Student
{
    int Roll;
    char Name[50];
    int Age;
    int Marks;
};
int main()
{
    struct Student S[5];
    int I = 1;
    for (I = 1; I <= 5; I++)
    {
        S[I].Roll = I;
        printf("Enter The Name Of Student %d : ", I);
        scanf("%s",S[I].Name);
        printf("Enter The Age Of Student %d : ", I);
        scanf("%d",&S[I].Age);
        printf("Enter The Marks Of Student %d : ", I);
        scanf("%d", &S[I].Marks);
    }
    for (I = 1; I <= 5; I++)
    {
        if (S[I].Roll == 1)
        {
            printf("\nRoll No Of Student %d Is ---> %d\n", I, S[I].Roll);
            printf("Name Of Student %d Is ---> %s\n", I, S[I].Name);
            printf("Age Of Student %d Is ---> %d\n", I, S[I].Age);
            printf("Marks Of Student %d Is ---> %d\n", I, S[I].Marks);
        }
        else
        {
            break;
        }
    }
    return 0;
}