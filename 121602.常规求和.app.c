#include<stdio.h>
int myFunction(int x)
{
	int b=0;
	for(;x>=0;x--){
	b+=x;
		}
	return	b;

	}
void main()
{
	int a;
	printf("本程序用于常规求和\n请输入一个大于0的数\n");
	scanf("%d",&a);
printf("%d\n",myFunction(a));
}
