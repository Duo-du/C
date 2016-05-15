/*题目：输入三个整数x,y,z，请把这三个数由小到大输出。*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,y,z,m;
	scanf("%d %d %d",&x,&y,&z);
	if(x>y)
	{m=x;x=y;y=m;}//如果x>y,x,y交换值 ，否则不变；使x<y; 
	if(z<x)
	{m=x;x=z;z=m;}//如果z<x,x,z交换值，否则不变 ；使x<z; 
	if(z<y)
	{m=y;y=z;z=m;}//如果 z<y,y,z交换值，否则不变；使 y<z; 
	printf("%d %d %d\n",x,y,z);
	
	return 0;
}