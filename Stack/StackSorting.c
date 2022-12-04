#include"MyStackInt.h"
int main()
{
    int N,I=0,A;
    printf("Total Number Of Elements You Want To Insert : ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        printf("Element %d : ",I);
        scanf("%d",&A);
        Push(A);
    }
    return 0;
}