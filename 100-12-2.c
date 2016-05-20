/*12--题目：判断101-200之间有多少个素数，并输出所有素数。*/

#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int i,n=0,j,leap;
	for(i=101;i<=200;i++){
		for(j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
					{
					leap=0;
					break;
					}
				leap=1;
			}
			
		if(leap)
			{
				printf("%-4d",i);
				n++;
				if(n%4==0)
					{
					printf("\n");
					}
			}		
	}
	printf("\n一共有%d个素数\n",n);
	return 0;
}