#include<stdio.h>
int main(void)
{
    int N,i,a,first=1;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {   a=1;
     while(i/a>0){
         a*=10;}
        if(i*i%a==i){
            if(!first) printf(" ");
        printf("%d",i);
        first=0;
        }
    }
     printf("\n");
    
    return 0;
}
        
