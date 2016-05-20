/*题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月
　　　后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？*/
/*第一个月--1对
第二个月----1对
第三个月----2对
第四个月----3对
第五个月----5对
第六个月----8对
。。。。。(n-1)+n=(n+1)*/

#include <stdio.h>
int sum(int month);
int main(int argc, char *argv[])
{
	int month;
	int total;
	printf("please input the month:"); 
	scanf("%d",&month);
	total=sum(month);
	printf("第%d月---%d对\n",month,total);
	return 0;
}
/*
int sum(int n)
{
	int T;
	if(n==1||n==2)
	T=1;
	else
	T=sum(n-1)+sum(n-2);
	return T;
}
*/

int sum(int n)
{
	if(n==1||n==2)
	return 1;
	else
	return sum(n-1)+sum(n-2);
} 

