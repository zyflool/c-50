/*
���Ӽ����� ��20 �֣�
���Ӧ�ö����桰���Ӽ�����������Ϸ������ͬʱ�������ƣ�ʤ��������ͼ��ʾ��
�ָ������˵Ľ����¼����ͳ��˫����ʤ��ƽ�������������Ҹ���˫���ֱ��ʲô���Ƶ�ʤ�����

�����ʽ��
����� 1 �и��������� N����10^5������˫������Ĵ�����
��� N �У�ÿ�и���һ�ν������Ϣ�����ס���˫��ͬʱ�����ĵ����ơ�
C �������ӡ���J ������������B ����������
�� 1 ����ĸ����׷����� 2 �������ҷ����м��� 1 ���ո�

�����ʽ��
����� 1��2 �зֱ�����ס��ҵ�ʤ��ƽ�������������ּ��� 1 ���ո�ָ���
�� 3 �и���������ĸ���ֱ����ס��һ�ʤ�����������ƣ��м��� 1 ���ո�
����ⲻΨһ�����������ĸ����С�Ľ⡣

����������
10
C J
J B
C B
B B
B C
C C
C B
J B
B C
J J
���������
5 3 2
2 3 5
B B
*/
#include <stdio.h>

int main ()
{
	int n;
	scanf("%d" , &n );
	int x[2][3] = {0};  //0:sheng  1:ping  2:fu
	int y[2][3] = {0};  //0:B   1:C  2:J
	char name[3] = "BCJ";
	getchar();
	while ( n-- ) {
		char a;
		char b;
		a=getchar();
		getchar();
		b=getchar();
		getchar();
		if ( a==b ) {
			x[0][1]++;
			x[1][1]++;
		} else if ( ( a=='C' && b=='J' ) || ( a=='J' && b=='B' ) || ( a=='B' && b=='C' ) ) {
			x[0][0]++;
			x[1][2]++;
			switch ( a ) {
			case 'B' : { y[0][0]++; break; }
			case 'C' : { y[0][1]++; break; }
			case 'J' : { y[0][2]++; break; }
			}
		} else if ( ( b=='C' && a=='J' ) || ( b=='J' && a=='B' ) || ( b=='B' && a=='C' ) ) {
			x[1][0]++;
			x[0][2]++;
			switch ( b ) {
			case 'B' : { y[1][0]++; break; }
			case 'C' : { y[1][1]++; break; }
			case 'J' : { y[1][2]++; break; }
			}
		}
	}
	int i;
	for ( i=0 ; i<3 ; i++ )
		printf("%d " , x[0][i] );
	printf("\n");
	for ( i=0 ; i<3 ; i++ )
		printf("%d " , x[1][i] );
	printf("\n");
	char maxn = 'Z';
	int max = 0;
	for ( i=0 ; i<3 ; i++ ) {
		if ( y[0][i] > max && maxn >= name[i] ) {
			max = y[0][i];
			maxn = name[i];
		}
	}
	printf("%c " , maxn );
	maxn = 'Z';
	max = 0;
	for ( i=0 ; i<3 ; i++ ) {
		if ( y[1][i] > max && maxn >= name[i] ) {
			max = y[1][i];
			maxn = name[i];
		}
	}
	printf("%c\n", maxn );
	return 0;
}
