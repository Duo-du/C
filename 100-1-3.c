/*1-题目：有1、2、3、4个数字，能组成多少个互
不相同且无重复数字的三位数？都是多少？*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k;
	i=1;
	do{
		j=1;
		do{
			k=1;
			do{				
				if(i!=j&&i!=k&&j!=k)
					printf("%d%d%d\n",i,j,k);
				k++;
			}while(k<5);
			j++;
		}while(j<5);
		i++;
	}while(i<5);
	return 0;
}