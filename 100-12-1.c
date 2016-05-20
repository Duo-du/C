/*12--题目：判断101-200之间有多少个素数，并输出所有素数。*/

#include <stdio.h>
#include <math.h>
int isprime(int j);
int main(int argc, char *argv[])
{
	int k;
	int n=0;
	for(k=101;k<=200;k++){
		if(isprime(k)){
			printf("%-4d",k);
			n++;
			if(n%4==0){   //每4个排一行 
			printf("\n");
		}		
		}
	}
	printf("\n一共有%d个素数\n",n);
	return 0;
}

int isprime(int j)
{
	int i;
	for(i=2;i<=sqrt(j);i++){
		if(j%i==0)
		return 0;
	}
	return 1;	
}