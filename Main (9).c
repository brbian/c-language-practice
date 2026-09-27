#include<stdio.h>
int main(void)
{
    int k,sum=0;
    scanf("%d",&k);
    if(k<=100){
        sum=2*k;
     printf("%d\n",sum);
    }
    else{
        sum=2*100+1*(k-100);
        printf("%d\n",sum);}
    return 0;
    }
