/*1-��Ŀ����1��2��3��4�����֣�����ɶ��ٸ���
����ͬ�����ظ����ֵ���λ�������Ƕ��٣�*/

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