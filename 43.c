/*
ͼ����� ��15 �֣�
ͼ������ǰ�ͼ���в���Ҫ�����ض�Ⱦ�ɱ���ɫ��ʹ����Ҫ���ֱ�͹�Գ������ָ���һ���ڰ�ͼ��Ҫ���㽫�Ҷ�ֵλ��ĳָ�������ڵ�����������ɫ����һ��ָ������ɫ�滻��

�����ʽ��
�����ڵ�һ�и���һ��ͼ��ķֱ��ʣ������������� M �� N��0<M,N��500����
�����Ǵ����˵ĻҶ�ֵ����˵� A �� B��0��A<B��255�����Լ�ָ�����滻�Ҷ�ֵ����� M �У�ÿ�и��� N �����ص�ĻҶ�ֵ������Կո�ָ������лҶ�ֵ���� [0, 255] �����ڡ�

�����ʽ��
�����Ҫ����˺��ͼ�񡣼���� M �У�ÿ�� N �����ػҶ�ֵ��ÿ���Ҷ�ֵռ 3 λ�������ɫҪ��ʾΪ 000���������һ���ո�ָ�������β�����ж���ո�

����������
3 5 100 150 0
3 189 254 101 119
150 233 151 99 100
88 123 149 0 255
���������
003 189 254 000 000
000 233 151 099 000
088 000 000 000 255
*/
#include <stdio.h>

int main ()
{
	int m;
	int n;
	int a;
	int b;
	int t;
	int paint[500][500];
	scanf("%d %d %d %d %d" , &m , &n , &a , &b , &t );
	int i;
	int j;
	for ( i=0 ; i<m ; i++ ) {
		for ( j=0 ; j<n ; j++ ) {
			scanf("%d" , &paint[i][j] );
			if ( paint[i][j]<=b && paint[i][j]>=a ) {
				paint[i][j] = t;
			}
		}
	}
	for ( i=0 ; i<m ; i++ ) {
		for ( j=0 ; j<n ; j++ ) {
			if ( paint[i][j]<10 ) {
				if ( j!=n-1 ) {
					printf("00%d " , paint[i][j] );
				} else {
					printf("00%d" , paint[i][j] );
				}
			} else if ( paint[i][j] <100 ) {
				if ( j!=n-1 ) {
					printf("0%d " , paint[i][j] );
				} else {
					printf("0%d" , paint[i][j] );
				}
			} else {
				if ( j!=n-1 ) {
					printf("%d " , paint[i][j] );
				} else {
					printf("%d" , paint[i][j] );
				}
			}
		}
		printf("\n");
	}
	return 0;
}