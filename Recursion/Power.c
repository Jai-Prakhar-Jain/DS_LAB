#include <stdio.h>
int Power(int N, int P);

int main()
{
    int N, P;
    printf("Enter The Base : ");
    scanf("%d", &N);
    printf("Enter The Exponent : ");
    scanf("%d", &P);
    Power(N, P);
    printf("Result For The Given Base And Power Is : %d", Power(N, P));
    return 0;
}

int Power(int N, int P)
{
    if (P == 0)
        return 1;
    if (P > 1)
        return N * Power(N, P - 1);
}