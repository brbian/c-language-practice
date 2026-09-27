/*任意给一个自然数n，求出这个自然数不同的因数*/
#include<stdio.h>
int main(void)
{
    int n,i,stat=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0) stat++;
    }
     printf("%d\n",stat);
    return 0;
    }
       
