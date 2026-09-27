#include<stdio.h>
int main(void)
{
    int X,S,sum=0;
    scanf("%d",&X);
    S=X/10%10+X%10+X/100%10;
        printf("%d\n",S);
    return 0;
}
    
    
