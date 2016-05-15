/*题目：输入三个整数x,y,z，请把这三个数由小到大输出。*/
           //冒泡排序 
#include <stdio.h>
void bublesort(int a[],int n);
int main(int argc, char *argv[])
{
	int amount;
	
	int i;
//	int a[amount];//此时amount不能为变量； 
	printf("please input the amount:");
	scanf("%d",&amount);
	printf("please input the numbers:");
	int a[amount];
	for(i=0;i<amount;i++) 
	scanf("%d",&a[i]);
	bublesort(a,amount);
	for(i=0;i<amount;i++)
	printf("%d ",a[i]);
	return 0;
}


void bublesort(int a[],int n)
{
	int j,k;
	while(n>0)
	{
		for(j=1;j<n;j++)
		{
			if(a[j-1]<a[j])//<是降序，>是升序。 
			{
				k=a[j];a[j]=a[j-1];a[j-1]=k;
			}
		}
		n--;
	}		
}