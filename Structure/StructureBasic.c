#include <stdio.h>
struct Student
{
    int RollNo;
    int Section;
    float Percentage;
    int MobNo;
};
int main()
{
    struct Student S[2];
    int I;
    for (I = 0; I < 2; I++)
    {
        printf("Enter The Value Of S[%d].RollNo ---> ", I);
        scanf("%d", &S[I].RollNo);
        printf("Enter The Value Of S[%d].Section ---> ", I);
        scanf("%d", &S[I].Section);
        printf("Enter The Value Of S[%d].Percentage ---> ", I);
        scanf("%f", &S[I].Percentage);
        printf("Enter The Value Of S[%d].MobNo ---> ", I);
        scanf("%d", &S[I].MobNo);
    }
    for (I = 0; I < 2; I++)
    {
        printf("%d\t", I, S[I].RollNo);
        printf("%d\t", I, S[I].Section);
        printf("%f\t", I, S[I].Percentage);
        printf("%d\t", I, S[I].MobNo);
        printf("\n");
    }
    return 0;
}