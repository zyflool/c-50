/*
Problem Description
��Ϊ�������ʦ�������������Ӿ���ÿ�µ�8���ˣ���Ϊ��һ���Ƿ����ʵ����ӣ����Һ��ھͿ����ˣ��Ǻ�
���Ƕ���ѧУ���񴦵Ĺ�����Ա��˵����һ�����Ǻ�æµ��һ�죬
���񴦵�С����ʦ������ڿ���һ�����⣺���ÿ����ʦ�Ĺ��ʶ֪����������Ҫ׼������������ң������ڸ�ÿλ��ʦ�����ʵ�ʱ�򶼲�����ʦ�����أ�
���������ʦ�Ĺ��ʶ�������������λԪ�������һ����100Ԫ��50Ԫ��10Ԫ��5Ԫ��2Ԫ��1Ԫ���֡�

Input
�������ݰ����������ʵ����ÿ������ʵ���ĵ�һ����һ������n��n<100������ʾ��ʦ��������Ȼ����n����ʦ�Ĺ��ʡ�
n=0��ʾ����Ľ���������������

Output
����ÿ������ʵ�����һ������x,��ʾ������Ҫ׼���������������ÿ�����ռһ�С�

Sample Input
3
1 2 3
0

Sample Output
4
*/
#include <stdio.h>

int work (int x)
{
	int a[6] = { 100 , 50 , 10 , 5 , 2 , 1 };
	int count = 0;
	int sum = 0;
	while ( x ) {
		if ( x < a[count] ) {
			count++;
			continue;
		} else {
			x -= a[count];
			sum++;
		}
	}
	return sum;
}

int main ()
{
	int n;
	scanf("%d" , &n );
	while ( n ) {
		int res = 0;
		while ( n-- ) {
			int t;
			scanf("%d" , &t );
			res += work(t);
		}
		printf("%d\n" , res);
		scanf("%d" , &n );
	}
	return 0;
}