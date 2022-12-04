#include <stdio.h>

#include <string.h>

struct Practical

{

    char N[50];

    int A;

    int B;
};

struct Practical P[10];

void Fun1()

{

    int I = 0;

    for (I = 1; I < 11; I++)

    {

        if (P[I].B < 200)

        {

            printf("\n");

            printf("Customer Having Balance Less Than 200 --->%s", P[I].N);
        }
    }
}

void Fun2()

{

    int I = 0;

    for (I = 1; I < 11; I++)

    {

        if (P[I].B >= 1000)

        {

            printf("\n");

            printf("Balance Of Customer %s Before Increment---> %d", P[I].N, P[I].B);

            P[I].B = P[I].B + 100;

            printf(" Balance Of Customer %s After Increment---> %d", P[I].N, P[I].B);
        }
    }
}

int main()

{

    int I = 0;

    for (I = 1; I < 11; I++)

    {

        printf("Enter The Name Of Customer %d : ", I);

        scanf("%s", P[I].N);

        printf("Enter The Account Number Of Customer %d : ", I);

        scanf("%d", &P[I].A);

        printf("Enter The Balance Of Customer %d : ", I);

        scanf("%d", &P[I].B);
    }

    Fun1();

    Fun2();

    return 0;
}