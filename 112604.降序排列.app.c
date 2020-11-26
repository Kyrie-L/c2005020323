#include<stdio.h>
void main(){
int a,b,c,l;
printf("输入三个整数");
scanf("%d %d %d",&a,&b,&c);

if(a<b)
{
	l=a;
	a=b, b=l;
}

 if(a<c){
	l=a;
a=c,c=l;
}
if(b<c){
	l=b;
b=c,c=l;
}
printf("%d,%d,%d",a,b,c);
}
