#include<stdio.h>
void main()
{
int h,l,a=90;
int arr2d[9][10]={
	{0}
};
for(h=0;h<9;h++)
{
	for(l=0;l<10;l++)
	{
		printf("%d  ",arr2d[h][l]);
	}
	printf("\n");
}
for(h=0;h<9;h++)
{
	for(l=0;l<10;l++)
	{	
		
		arr2d[h][l]=a--;
		printf("%-2d  ",arr2d[h][l]);
	}
	printf("\n");
}
}
