#include<stdio.h>
void main(){
int money;
printf("请输入你的工资");
scanf("%d",&money);
if(money>=0&&money<=100)
{
printf("赤贫打工人");
}
else if(money>=101&&money<=1000)
{
printf("普通打工人");
}
else if(money>=1001&&money<=20000)
{
printf("土豪打工人");
}
else
{
printf("输入有误，请重新输入");
}






}
