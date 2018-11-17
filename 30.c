/*
����A+B ��15 �֣�
������ A �ġ�DA(Ϊ 1 λ���������֡�����Ϊ�� A ������ DA��ɵ������� PA��
���磺���� A=3862767��DA=6���� A �ġ�6 ���֡�PA��66����Ϊ A ���� 2 �� 6��
�ָ��� A��DA��B��DB�����д������� PA+PB��

�����ʽ��
������һ�������θ��� A��DA��B��DB���м��Կո�ָ������� 0<A,B<10^10��

�����ʽ��
��һ������� PA+PB��ֵ��

�������� 1��
3862767 6 13530293 3
������� 1��
399
�������� 2��
3862767 1 13530293 8
������� 2��
0
*/
#include <stdio.h>

int work (char n[] , int m)
{
	int res = 0;
	int t = 1;
	int i;
	for ( i=9 ; i>=0 ; i-- ) {
		if ( n[i]>='0' && n[i]<='9' ) {
			if ( n[i]-'0' == m ) {
			    res += t*m;
			    t *= 10;
			}
		}
	}
	return res;
}

int main ()
{
	char a[10];
	char b[10];
	int da;
	int db;
	scanf("%s" , &a);
	scanf("%d" , &da);
	scanf("%s" , &b);
	scanf("%d" , &db);
	int pa = work(a,da);
	int pb = work(b,db);
	printf("%d\n" , pa + pb);
	return 0;
}
