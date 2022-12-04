#include <stdio.h>
#include <string.h>
struct Student
{
    int Roll;
    char Name[50];
    int Che_Marks;
    int Phy_Marks;
    int Math_Marks;
    int Percent;
} S[5];
int main()
{
    int I = 1;
    for (I = 1; I <= 5; I++)
    {
        printf("Enter The Roll Number of Student %d : ", I);
        scanf("%d", &S[I].Roll);
        printf("Enter The Name of Student %d : ", I);
        scanf("%s", S[I].Name);
        printf("Enter The Marks Secured In Chemistry By Student %d : ", I);
        scanf("%d", &S[I].Che_Marks);
        printf("Enter The Marks Secured In Physics By Student %d : ", I);
        scanf("%d", &S[I].Phy_Marks);
        printf("Enter The Marks Secured In Mathematics By Student %d : ", I);
        scanf("%d", &S[I].Math_Marks);
        S[I].Percent = 100 * (S[I].Math_Marks + S[I].Che_Marks + S[I].Phy_Marks) / 300;
    }
    for (I = 1; I <= 5; I++)
    {
        printf("\nRoll Number Of Student %d Is ---> %d\n", I, S[I].Roll);
        printf("Name Of Student %d Is ---> %s\n", I, S[I].Name);
        printf("Percentage Of Student %d Is ---> %d\n", I, S[I].Percent);
    }
    return 0;
}