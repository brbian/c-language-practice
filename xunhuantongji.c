/*输入两个正整数n和m，读取n个正整数a1，a2...an，统计n个正整数中有多少个正整数的值小于m*/
#include<stdio.h>
int main(void)
{
    int n,m,a,stat=0,i;
        scanf("%d%d",&n,&m);
        for(i=1;i<=n;i++){
            scanf("%d",&a);
            if(a<m)stat++;
     }
        printf("%d\n",stat);
        return 0;
}
    
    
