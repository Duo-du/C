/*3-��Ŀ ��һ��������������100����
һ����ȫƽ�������ټ���168����һ��
��ȫƽ���������ʸ����Ƕ��٣� */

#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int i,a,b;
	int limit=100000;//���ý��ޣ���������ѭ�� 
	for(i=1;i<limit;i++){
		a=sqrt(i+100);
		b=sqrt(i+268);
		if((i+100)==a*a&&(i+268)==b*b)
		printf("%d\n",i);	
	}
	return 0;
}