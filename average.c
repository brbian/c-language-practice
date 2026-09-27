/*输入三个学生的成绩，计算平均分*/
#include<stdio.h>
int main(void)
{
    int x,y,z;
    double a;
    scanf("%d%d%d",&x,&y,&z);
    a=(x+y+z)/3.00;
    printf("%.2lf\n",a);
    return 0;
}
    
