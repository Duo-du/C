/*��Ŀ��������������x,y,z���������������С���������*/
//3 2222 11
#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	if(x<y){						//��x<y�������� 
		if(z<x)
		printf("%d %d %d\n",z,x,y);//z<x<y 
		else if(y<z)
		printf("%d %d %d\n",x,y,z);//x<y<z
		else 
		printf("%d %d %d\n",x,z,y);//x<z<y
	}
	else{							//�� y<x�������� 
		if(z<y)	
		printf("%d %d %d\n",z,y,x);//z<y<x
		else if(x<z)
		printf("%d %d %d\n",y,x,z);//y<x<z
		else 
		printf("%d %d %d\n",y,z,x);//y<z<x 
	}
	return 0;
}
//���ʺϲ����ٵ���� 