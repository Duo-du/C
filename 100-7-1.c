/*7--题目：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!*/ 

#include <stdio.h>
int main(int argc, char *argv[])
{
	char a=1,b=3;
	printf("%c %c %c %c %c\n",a,a,b,a,a);
	printf("%c %c %c %c %c\n",a,b,a,b,a);
	printf("%c %c %c %c %c\n",b,a,a,a,b);
	printf("%c %c %c %c %c\n",a,b,a,b,a);
	printf("%c %c %c %c %c\n",a,a,b,a,a); 
	return 0;
}