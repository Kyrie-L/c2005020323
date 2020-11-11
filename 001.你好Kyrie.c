#include<stdio.h>
void main(){
int arr[]={31,29,31,30,31,30,31,31,30,31,30,31};
int n;


for(n=0;n<=11;n++){
printf("%d\n",arr[n]);}
scanf("%d",&n);
printf("%d",arr[n-1]);
}
