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
    
    
