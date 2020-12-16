#include<stdio.h>
int myFunction(int x)
{
	if(x<=0){
	return 0;
}
	return x+myFunction(x-1);
}
void main()
{
	int a;
	printf("本程序用于递归求和\n请输入一个大于0的数\n");
	scanf("%d",&a);
printf("%d\n",myFunction(a));
}
