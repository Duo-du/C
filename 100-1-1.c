/*1-题目：有1、2、3、4个数字，能组成多少个互
不相同且无重复数字的三位数？都是多少？*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k;
	for (i=1;i<5;i++){
		for(j=1;j<5;j++){
			for(k=1;k<5;k++){
				if(i!=k&&i!=j&&j!=k){
					printf("%d%d%d\n",i,j,k);
				}
			}
		}
	}
	return 0;
}