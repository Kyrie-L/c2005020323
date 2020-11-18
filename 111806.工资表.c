#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
if(a<0){
printf("你还有花呗没还，无法使用该程序");}
 if(a>0&&a<=500){
printf("赤贫");}
 if(a>=501&&a<=1200){
printf("贫穷");}
 if(a>=1201&&a<=3000){
printf("普通打工人");}
if(a>=3001&&a<=12000){
printf("普通清洁工");}
if(a>=12001&&a<=20000)
{printf("电工工资");
}
if(a>=20001&&a<=20000000)
{printf("程序员");
}
}
