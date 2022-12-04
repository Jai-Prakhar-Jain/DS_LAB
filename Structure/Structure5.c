#include <stdio.h>
#include <string.h>
int Fun1(int A, char B[50], int C);
int Fun2(int A, char B[50], int C);
int Fun3(int A, char B[50], int C);
struct Student
{
    int Roll;
    char Name[50];
    int Age;
} S[10];
int main()
{
    int I = 1;
    for (I = 1; I <= 10; I++)
    {
        printf("Enter The Roll Number Of Student %d : ", I);
        scanf("%d", &S[I].Roll);
        printf("Enter The Name Of Student %d : ", I);
        scanf("%s", S[I].Name);
        printf("Enter The Age Of Student %d : ", I);
        scanf("%d", &S[I].Age);
    }
    for (I = 1; I <= 10; I++)
    {
        Fun1(S[I].Roll, S[I].Name, S[I].Age);
        printf("\n");
        Fun2(S[I].Roll, S[I].Name, S[I].Age);
        printf("\n");
        Fun3(S[I].Roll, S[I].Name, S[I].Age);
        printf("\n");
    }
    return 0;
}
int Fun1(int A, char B[50], int C)
{
    if (C == 14)
        printf("Name Of The Student Whose Age Is 14 %s", B);
    return 0;
}
int Fun2(int A, char B[50], int C)
{
    if (A % 2 == 0)
        printf("Name Of The Student Whose Roll Number Is Even %s", B);
    return 0;
}
int Fun3(int A, char B[50], int C)
{
    if (A >= 1 && A <= 10)
        return 0;
    else
    {
        printf("Roll Number Of The Student Whose Roll Number Is Given Is %d\n", A);
        printf("Name Of The Student Whose Roll Number Is Given Is %s\n", B);
        printf("Age Of The Student Whose Roll Number Is Given Is %d\n", C);
    }
    return 0;
}
