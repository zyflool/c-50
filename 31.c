/*
Problem Description
������A�Ƿ��ܱ�������B��������֪��Ϊʲôxhd���о�������⣬��������ɡ�
 
Input
�������ݵĵ�һ����һ������T����ʾ��T�����ݡ�
ÿ������������������A��B(A,B<10^9)��

Output
����ÿ���������ݣ����"YES"��ʾ���Ա�������"NO"��ʾ���ܱ�������
 
Sample Input
2
4 2
5 3
 
Sample Output
YES
NO
*/
#include <stdio.h>

int main ()
{
	int n;
	scanf("%d" , &n);
	while ( n-- ) {
		int a;
		int b;
		scanf("%d %d" , &a , &b);
		if ( !(a%b) ) {
			printf("YES\n");
		} else 
		    printf("NO\n");
	}
	return 0;
}
