/*1-��Ŀ����1��2��3��4�����֣�����ɶ��ٸ���
����ͬ�����ظ����ֵ���λ�������Ƕ��٣�*/

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