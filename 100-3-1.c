/*3-题目 ：一个整数，它加上100后是
一个完全平方数，再加上168又是一个
完全平方数，请问该数是多少？ */

#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int i,a,b;
	int limit=100000;//设置界限，否则无限循环 
	for(i=1;i<limit;i++){
		a=sqrt(i+100);
		b=sqrt(i+268);
		if((i+100)==a*a&&(i+268)==b*b)
		printf("%d\n",i);	
	}
	return 0;
}