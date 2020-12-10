#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
printf("欢迎使用吃货小程序\n");
printf("请输入春节-端午节-中秋节-元宵节其中一个\n");
while(1)
{
scanf("%s",&a);
if(strcmp(a,"春节")==0)
	printf("给我安排饺子\n");
else if(strcmp(a,"端午节")==0)
	printf("给我安排粽子\n");
else if(strcmp(a,"中秋节")==0)
	printf("给我安排月饼\n");
else if(strcmp(a,"元宵节")==0)
	printf("给我安排元宵\n");
}
}
