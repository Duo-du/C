/*2-题目：企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；利润高
　　　于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提
　　　成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于
　　　40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于
　　　100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	float profit,bonus;
	printf("please input the profit:");
	scanf("%f",&profit);
	if(profit<10){
		bonus=profit*0.1;
	}else if(profit>=10&profit<20){
		bonus=10*0.1+(profit-10)*0.075;
	}else if(profit>=20&profit<40){
		bonus=20*0.075+(profit-20)*0.05;
	}else if(profit>=40&profit<60){
		bonus=40*0.05+(profit-40)*0.03;
	}else if(profit>=60&profit<100){
		bonus=60*0.03+(profit-60)*0.015;
	}else if(profit>=100){
		bonus=100*0.015+(profit-100)*0.01;
	}
	printf("the bonus are %f\n",bonus);		
	return 0;
}//此算法对题目理解有偏差。 仅作编程练习。 