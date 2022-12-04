#include <stdio.h>
struct Complex
{
    int Real;
    int Imaginary;
};
int main()
{
    struct Complex C1, C2;
    printf("Enter The Value Of Real Part of First Complex Number : ");
    scanf("%d", &C1.Real);
    printf("Enter The Value Of Imaginary Part of First Complex Number : ");
    scanf("%d", &C1.Imaginary);
    printf("Enter The Value Of Real Part of Second Complex Number : ");
    scanf("%d", &C2.Real);
    printf("Enter The Value Of Imaginary Part of Second Complex Number : ");
    scanf("%d", &C2.Imaginary);
    int A = (C1.Real * C2.Real);
    int B = (C1.Real * C2.Imaginary) + (C2.Real * C1.Imaginary);
    int C = -(C1.Imaginary * C2.Imaginary);
    A = A + C;
    printf("Complex Multiplication ---> ");
    if (B > 0)
    {
        printf("%d + %di ", A, B);
    }
    else
    {
        printf("%d  %di ", A, B);
    }
}