#include<stdio.h>
int main(void)
{
    int n,i,flag=1;
    double item;
    double sum=0;
    scanf("%d",&n);
        for(i=1;i<=n;i++)
            {
           item=flag*1.0/i;
            sum=sum+item;
            flag=-flag;
            }
            printf("%.10f\n",sum);
            return 0;
 }
            
           
         
    
