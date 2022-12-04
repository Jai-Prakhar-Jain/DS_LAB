#include <stdio.h>
struct Height
{
    int Feet;
    int Inch;
};
int main()
{
    struct Height H1, H2;
    printf("Feet 1 : ");
    scanf("%d", &H1.Feet);
    printf("Inch 1 : ");
    scanf("%d", &H1.Inch);
    printf("Feet 2 : ");
    scanf("%d", &H2.Feet);
    printf("Inch 2 : ");
    scanf("%d", &H2.Inch);
    int A = H1.Inch + H2.Inch;
    int B = H1.Feet + H2.Feet;
    if (A >= 12)
    {
        A = A % 12;
        B = B + 1;
    }

    printf("Height After Addition ---> %d' %d'' ", B, A);
}
