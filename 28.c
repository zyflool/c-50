/*
Problem Description
���ڸ�����һ���ַ�����ͳ�����������ַ����ֵĴ�����
 

Input
���������ж��У���һ����һ������n����ʾ����ʵ���ĸ������������n�У�ÿ�а���һ������ĸ��������ɵ��ַ�����
 

Output
����ÿ������ʵ��������ô�����ֵ�ĸ�����ÿ�����ռһ�С�
 

Sample Input
2
asdfasdf123123asdfasdf
asdf111111111asdfasdfasdf
 

Sample Output
6
9
*/ 
#include <stdio.h>

int main ( )
{
	int n;
	scanf("%d", &n);
	while ( n-- ) {
		char a;
		scanf("%c" , &a);
		int sum = 0;
		scanf("%c", &a);
		while ( a!='\n' ) {
		    if ( a >= '0' && a <= '9' )
		        sum++;
		    scanf("%c" , &a); 
		}
		printf("%d\n" , sum);
	}
	return 0;
}
