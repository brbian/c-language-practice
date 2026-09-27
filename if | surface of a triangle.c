/*输入三个正整数，若能做三角形边长，则计算并输出三角形面积，否则输出can't*/
#include<stdio.h>
int main(void)
{
    double S,p,x,y,z;
    scanf("%lf%lf%lf",&x,&y,&z);
    if(x+y>z&&x+z>y&&z+y>x) {
        p=(x+y+z)/2.0;
        S=sqrt(p*(p-x)*(p-y)*(p-z));
        printf("%.2f\n",S);}
    else{
        printf("Can't\n");
    }
         return 0;
}
    

