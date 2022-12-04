#include <stdio.h>
int main()
{
    int A[5][5], X;
    printf("Base Address : %u\n", A[0]);
    printf("Address Of Element Present At A[2][2] : %u\n", &A[2][2]);
    X = ((2 - 0) * (4 - 0 + 1)) + (2 - 0);
    printf("Address Of Element Present At A[2][2] By The Help Of Index Formula: %u", A[0] + X);
    return 0;
}