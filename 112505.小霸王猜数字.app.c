#include<stdio.h>
#include<windows.h>
void main()
{
int a=5,c;
printf("霸王猜字游戏\n");
while(1){
scanf("%d",&c);
if(c==a){
printf("猜对了\n");
break;
}
else if(c>a)
{
	printf("猜的太大了\n");
}
else if(c<a)
{
printf("猜的太小了\n");
}}
}
