#include <stdio.h>
struct Time
{
    int Hour;
    int Min;
    int Sec;
};
int main()
{
    struct Time T1, T2;
    printf("Hour 1 : ");
    scanf("%d", &T1.Hour);
    printf("Minute 1 : ");
    scanf("%d", &T1.Min);
    printf("Second 1 : ");
    scanf("%d", &T1.Sec);
    printf("Hour 2 : ");
    scanf("%d", &T2.Hour);
    printf("Minute 2 : ");
    scanf("%d", &T2.Min);
    printf("Second 2 : ");
    scanf("%d", &T2.Sec);
    int A = T1.Sec + T2.Sec;
    int B = T1.Min + T2.Min;
    int C = T1.Hour + T2.Hour;
    if (A >= 60)
    {
        A = A % 60;
        B = B + 1;
        if (B > 60)
        {
            B = B % 60;
            C = C + 1;
        }
    }
    printf("Time After Addition ---> %d :: %d :: %d", C, B, A);
}
