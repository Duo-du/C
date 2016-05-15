/*6-题目：用*号输出字母C的图案。*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	char c='*';
	printf("    %c%c%c\n",c,c,c);
	printf("  %c\n",c);
	printf("%c\n",c);
	printf("%c\n",c);
    printf("  %c\n",c);
    printf("    %c%c%c\n",c,c,c);
	return 0;
}