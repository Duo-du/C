/*��Ŀ��������������x,y,z���������������С���������*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,y,z,m;
	scanf("%d %d %d",&x,&y,&z);
	if(x>y)
	{m=x;x=y;y=m;}//���x>y,x,y����ֵ �����򲻱䣻ʹx<y; 
	if(z<x)
	{m=x;x=z;z=m;}//���z<x,x,z����ֵ�����򲻱� ��ʹx<z; 
	if(z<y)
	{m=y;y=z;z=m;}//��� z<y,y,z����ֵ�����򲻱䣻ʹ y<z; 
	printf("%d %d %d\n",x,y,z);
	
	return 0;
}