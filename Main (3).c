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
       
