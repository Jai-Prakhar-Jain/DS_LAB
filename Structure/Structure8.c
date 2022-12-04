#include <stdio.h>
#include <string.h>
struct Employee
{
    char N[50];
    int SL;
    int H;
} S[10];
int main()
{
    int I = 1;
    for (I = 1; I <= 4; I++)
    {
        printf("Enter The Name Of Employee %d : ", I);
        scanf("%s", S[I].N);
        printf("Enter The Salary Of Employee %d : ", I);
        scanf("%d", &S[I].SL);
        printf("Enter The Hour Of Work Per Day Of Employee %d : ", I);
        scanf("%d", &S[I].H);
    }
    for (I = 1; I <= 4; I++)
    {
        if (S[I].H >= 8)
        {
            S[I].SL = S[I].SL + 50;
        }
    }
    printf("\n");
    for (I = 1; I <= 4; I++)
    {
        printf("Final Salary Of %s Is %d ", S[I].N, S[I].SL);
        printf("\n");
    }
    return 0;
}