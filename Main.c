#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
   
    int a1,an,i,sum=0;
    
    scanf("%d%d",&a1,&an);
    for (i=a1;i<=an;i=i+2){
       sum=sum+i;
}
    printf("%d\n",sum);
    
    return 0;
}    
