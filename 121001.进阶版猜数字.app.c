#include<stdio.h>
#include<string.h>
void main()
{
	int b=13,d;
	char a[100];
	char c[]="你真的想要吗";
	printf("欢迎体验猜字游戏密令版\n请先输入密令后才能进入游戏\n＋qq123456789获取密令\n");
		while(1){
		scanf("%s",&a);
		if(strcmp(a,c)==0)
		{
			printf("请入游戏\n");
			printf("温馨提示答案在1-20");
			while(1){
				scanf("%d",&d);
			if(d>b)
			{
				printf("太大了");
			}
			else if(d<b)
			{
				printf("太小了");
			}
			else if(d==b)
			{
				printf("太牛了\n");
				printf("游戏结束\n");
			}
			break;

			}break;
		}
	
		else 
		printf("请输入正确的密令\n");

			}
}
