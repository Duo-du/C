/*4-题目：输入某年某月某日，判断这一天是这一年的第几天？*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int year,month,day,leap,total;
	printf("please input the year-month-day :");
	scanf("%d-%d-%d",&year,&month,&day);
	for(;month>12||month<1||day<1||day>31 ;){
		printf("please input the right month or day\n");
		printf("please input the year-month-day :");
		scanf("%d-%d-%d",&year,&month,&day);
	}
	switch(month){
		case 1:total=day;break;
		case 2:total=31+day;break;
		case 3:total=59+day;break;
		case 4:total=90+day;break;
		case 5:total=120+day;break;
		case 6:total=151+day;break;
		case 7:total=181+day;break;
		case 8:total=212+day;break;
		case 9:total=243+day;break;
		case 10:total=273+day;break;
		case 11:total=304+day;break;
		case 12:total=334+day;break;
		default:break;
	}
	if(year%400==0||(year%4==0&&year%100!=0)){
		if(month>2)
		total++;
	}
	printf("there are %d days\n",total);
	return 0;
}