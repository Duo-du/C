/*10--题目：打印楼梯，同时在楼梯上方打印两个笑脸。*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j;
	printf("\1\1\n");
	for(i=1;i<30;i++){
		for(j=1;j<i+1;j++){
			printf("%c%c",219,219);
		}
		printf("\n");
	}
	return 0;
}