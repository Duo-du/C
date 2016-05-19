/*9--题目：要求输出国际象棋棋盘。*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j;
	for(i=1;i<9;i++)
	{
		for(j=1;j<9;j++)
		{
			if((i+j)%2==0)
			{
				printf("  ");
			}
			else
			printf("%c%c",1,1);
		}
		printf("\n");
	}
	return 0;
}