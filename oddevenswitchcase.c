#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number to check whether it is odd or even : ");
    scanf("%d",&a);
    switch(a%2)
    {
        case 1: printf("ODD");
                break;
        case 0: printf("EVEN");
                break;
        
    }
        return 0;
    
}