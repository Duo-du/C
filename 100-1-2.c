/*1-题目：有1、2、3、4个数字，能组成多少个互
不相同且无重复数字的三位数？都是多少？*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k;
	i=1;
	while(i<5){
		j=1;
		while(j<5){
			k=1;
			while(k<5){
				if(i!=j&&i!=k&&k!=j){
					printf("%d%d%d\n",i,j,k);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return 0;
}