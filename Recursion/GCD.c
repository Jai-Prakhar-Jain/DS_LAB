#include <stdio.h>
int GCD1(int A, int B);
int GCD2(int A, int B);
int main()
{
    int A, B;
    printf("Enter First Number : ");
    scanf("%d", &A);
    printf("Enter Second Number : ");
    scanf("%d", &B);
    GCD1(A, B);
    printf("GCD Of The Given Numbers Is : %d", GCD1(A, B));
    printf("\n\n");
    GCD2(A, B);
    printf("GCD Of The Given Numbers Is : %d", GCD2(A, B));
    return 0;
}

int GCD1(int A, int B)
{
    if (A == B)
        return A;
    if (A > B)
        return GCD1(A - B, B);
    if (A < B)
        return GCD1(A, B - A);
}
int GCD2(int A, int B)
{
    if (A == 0)
        return B;
    if (B == 0)
        return A;
    if (A > B)
        return GCD2(A % B, B);
    if (A < B)
        return GCD2(A, B % A);
}