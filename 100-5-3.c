/*��Ŀ��������������x,y,z���������������С���������*/
           //ð������ 
#include <stdio.h>
void bublesort(int a[],int n);
int main(int argc, char *argv[])
{
	int amount;
	
	int i;
//	int a[amount];//��ʱamount����Ϊ������ 
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
			if(a[j-1]<a[j])//<�ǽ���>������ 
			{
				k=a[j];a[j]=a[j-1];a[j-1]=k;
			}
		}
		n--;
	}		
}