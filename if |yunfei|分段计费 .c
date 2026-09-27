#include<stdio.h>
int main(void)
{
    double k,sum=0;
    scanf("%lf",&k);
    if(k<=20){
        sum=1.68*k;
        printf("%.2f\n",sum);}
    
    else{
        sum=1.98*k;
        printf("%.2f\n",sum);
    }
    return 0;
    }
    
