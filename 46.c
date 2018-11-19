/*
朋友数 （20 分）
如果两个整数各位数字的和是一样的，则被称为是“朋友数”，而那个公共的和就是它们的“朋友证号”。
例如 123 和 51 就是朋友数，因为 1+2+3 = 5+1 = 6，而 6 就是它们的朋友证号。给定一些整数，要求你统计一下它们中有多少个不同的朋友证号。

输入格式：
输入第一行给出正整数 N。随后一行给出 N 个正整数，数字间以空格分隔。题目保证所有数字小于 10^4。

输出格式：
首先第一行输出给定数字中不同的朋友证号的个数；随后一行按递增顺序输出这些朋友证号，数字间隔一个空格，且行末不得有多余空格。

输入样例：
8
123 899 51 998 27 33 36 12
输出样例：
4
3 6 9 26
*/
#include <stdio.h>


int work (int a) 
{
	if ( a < 10 ) {
		return a;
	} else if ( a < 100 ) {
		return a/10 + a%10; 
	} else if ( a < 1000 ) {
		return a/100 + (a/10)%10 + a%10;
	} else {
		return a/1000 + a/100%10 + a/10%10 + a%10;
	}
}

int main ()
{
	int mark[37] = {0};
	int count = 0;
	int n;
	scanf("%d" , &n );
	while ( n-- ) {
		int m;
		scanf("%d" , &m );
		int z = work(m);
		if ( !mark[z] ) {
			mark[z] = 1;
			count++;
		}
	}
	printf("%d\n" , count );
	int i;
	for ( i=1 ; i<37 ; i++ ) {
		if ( mark[i] ) {
			printf("%d " , i );
		}
	}
	return 0;
}
