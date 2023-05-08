#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter two numbers to swap : \n");
    scanf("%d %d", &a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d \n  %d \n ", a,b);
    return 0;
}
