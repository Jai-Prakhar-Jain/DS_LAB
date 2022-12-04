#include<stdio.h>
void TOH(int N,char S,char M,char D);

int main()
{
    int N;
    char S='S',M='M',D='D';
    printf("Enter The No. Of Discs : ");
    scanf("%d",&N);
    TOH(N,S,M,D);
}

void TOH(int N,char S,char M,char D)
{
    if(N==1)
    {
        printf("\n%c---->%c\n",S,D);
    }
    else
    {
        TOH(N-1,S,D,M);
        printf("%c---->%c",S,D);
        TOH(N-1,M,S,D);
    }
}