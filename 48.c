/*
锤子剪刀布 （20 分）
大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：
现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。

输入格式：
输入第 1 行给出正整数 N（≤10^5），即双方交锋的次数。
随后 N 行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。
C 代表“锤子”、J 代表“剪刀”、B 代表“布”，
第 1 个字母代表甲方，第 2 个代表乙方，中间有 1 个空格。

输出格式：
输出第 1、2 行分别给出甲、乙的胜、平、负次数，数字间以 1 个空格分隔。
第 3 行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有 1 个空格。
如果解不唯一，则输出按字母序最小的解。

输入样例：
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
输出样例：
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
