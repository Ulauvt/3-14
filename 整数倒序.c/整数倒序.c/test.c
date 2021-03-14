#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int ret = 0;
	int x= 0;
	while(1)
	{
		scanf("%d", &x);
		ret = reverse(x);
		printf("%d\n", ret);
	}
	return 0;

		

	
}
int reverse(int x)
{
	long int n = 0;
	while(x!=0)//while循环，判断该数是否还需要取模及进行除法运算，如x=0，那么
		//说明已经无需再进行
	{
		n = n * 10 + x % 10;
		//n为最低位，若想将其变为最高位，则原值每模一次都需要*10，
		//那么则将其原值*10再加上每次模后产生的数
		x = x / 10;
	}
	return (int)n == n ? (int)n : 0; //将long int型转换成 int，若转换后的值未发生
	//变化则说明没有溢出
}