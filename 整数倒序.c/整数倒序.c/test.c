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
	while(x!=0)//whileѭ�����жϸ����Ƿ���Ҫȡģ�����г������㣬��x=0����ô
		//˵���Ѿ������ٽ���
	{
		n = n * 10 + x % 10;
		//nΪ���λ�����뽫���Ϊ���λ����ԭֵÿģһ�ζ���Ҫ*10��
		//��ô����ԭֵ*10�ټ���ÿ��ģ���������
		x = x / 10;
	}
	return (int)n == n ? (int)n : 0; //��long int��ת���� int����ת�����ֵδ����
	//�仯��˵��û�����
}