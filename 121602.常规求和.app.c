#include<stdio.h>
void main()
{
int a,b=0;
printf("该程序用于常规求和\n请输入一个大于0的数\n");
scanf("%d",&a);
for(;a>=0;a--)
{
b+=a;
}
printf("结果是%d\n",b);
}
