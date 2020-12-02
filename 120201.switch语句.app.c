#include<stdio.h>
void main()
{
	int n;
	printf("用于查询大学排名，请输入名次\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:printf("清华大学");break;
	case 2:printf("北京大学");break;
	case 3:printf("中国科技大学");break;
	case 4:printf("浙江大学");break;
	case 5:printf("复旦大学");break;
	case 6:printf("南京大学");break;
	case 7:printf("上海交通大学");break;
	case 8:printf("中山大学");break;
	case 9:printf("北京师范大学");break;
	case 10:printf("华中科技大学");break;
	case 11:printf("南方科技大学");break;
	case 12:printf("南开大学");break;
	case 13:printf("武汉大学");break;
	case 14:printf("中南大学");break;
	case 15:printf("哈尔滨工业大学");break;
	case 16:printf("湖南大学");break;
	case 17:printf("同济大学");break;
	case 18:printf("北京航空航天大学");break;
	case 19:printf("华东师范大学");break;
	case 20:printf("中国人民大学");break;
	default :printf("请输入1到20");
	}
