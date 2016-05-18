/*8--题目：输出9*9口诀。*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-3d ",i,j,i*j);/*-3d表示左对齐，占三位字符*/ 
		}
		printf("\n");
	}
	return 0;
}