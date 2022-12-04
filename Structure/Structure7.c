#include <stdio.h>
struct Date
{
    int DD;
    int MM;
    int YYYY;
} D1, D2;
int main()
{
    printf("Enter The DD of Date 1 : ");
    scanf("%d", &D1.DD);
    printf("Enter The MM of Date 1 : ");
    scanf("%d", &D1.MM);
    printf("Enter The YYYY of Date 1 : ");
    scanf("%d", &D1.YYYY);
    printf("Enter The DD of Date 2 : ");
    scanf("%d", &D2.DD);
    printf("Enter The MM of Date 2 : ");
    scanf("%d", &D2.MM);
    printf("Enter The YYYY of Date 2 : ");
    scanf("%d", &D2.YYYY);
    if (D1.DD == D2.DD && D1.MM == D2.MM && D1.YYYY == D2.YYYY)
        printf("Given Dates Are Equal");
    else
        printf("Given Dates Are Not Equal");
    return 0;
}