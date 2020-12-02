#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("请输入秒数\n");
		while(1){
			scanf("%d",&a);
			b=a/3600;
			c=a%3600/60;
			d=a-3600*b-60*c;
			printf("%02d:",b);
			printf("%02d:",c);
			printf("%02d\n",d);
}
}
