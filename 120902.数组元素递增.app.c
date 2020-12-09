#include<stdio.h>
void main()
{
int h,l,a=1;
int arr2d[19][20]={
	{0}
};
for(h=0;h<19;h++)
{
	for(l=0;l<20;l++)
	{
		printf("%d  ",arr2d[h][l]);
	}
	printf("\n");
}

for(h=0;h<19;h++)
{
	for(l=0;l<20;l++)
	{	
		
    arr2d[h][l]=a++;
		printf("%-2d  ",arr2d[h][l]);
	}
	printf("\n");
}
}
