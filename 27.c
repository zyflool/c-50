/*
Problem Description
现有一笔经费可以报销一定额度的发票。允
许报销的发票类型包括买图书（A类）、文具（B类）、差旅（C类），
要求每张发票的总额不得超过1000元，每张发票上，单项物品的价值不得超过600元。
现请你编写程序，在给出的一堆发票中找出可以报销的、不超过给定额度的最大报销额。
 

Input
测试输入包含若干测试用例。每个测试用例的第1行包含两个正数 Q 和 N，其中 Q 是给定的报销额度，N（<=30）是发票张数。随后是 N 行输入，每行的格式为：
m Type_1:price_1 Type_2:price_2 ... Type_m:price_m
其中正整数 m 是这张发票上所开物品的件数，Type_i 和 price_i 是第 i 项物品的种类和价值。物品种类用一个大写英文字母表示。当N为0时，全部输入结束，相应的结果不要输出。
 

Output
对每个测试用例输出1行，即可以报销的最大数额，精确到小数点后2位。
 

Sample Input
200.00 3
2 A:23.50 B:100.00
1 C:650.00
3 A:59.99 A:120.00 X:10.00
1200.00 2
2 B:600.00 A:400.00
1 C:200.50
1200.50 3
2 B:600.00 A:400.00
1 C:200.50
1 A:100.00
100.00 0
 

Sample Output
123.50
1000.00
1200.50
*/
#include <stdio.h>
#include <string.h>
int main ()
{
	double Q;
	int N;
	int num[30];
	int f[300000];
	scanf("%lf %d" ,&Q, &N);
	while ( N ) {
        int q = (int)(Q*100);
		int count = 0 ;
		int i;
		for ( i=0 ; i<N ; i++ ) {
			int n;
			scanf("%d" , &n);
			int j;
			int flag = 1 ;
			int sum = 0;
			for ( j=0 ; j<n ; j++ ) {
				char c;
				double m;
				scanf(" %c:%lf" ,&c , &m );
				sum += (int)(m*100);
				if ( ( c != 'A' && c != 'B' && c != 'C' ) || sum > 100000 || m > 600 || sum > q ) {
				    flag = 0;
				}
			}
			if ( flag ) {
				num[count] = sum;
				count++;
			}
		}
		for ( i=0 ; i<=q ; i++ )
			f[i]=0;
		int j;
		for ( i=0 ; i<count ; i++ )
		    for ( j=q ; j>=num[i] ; j-- )
		        f[j] = ( f[j-num[i]]+num[i] > f[j] ) ? ( f[j-num[i]] + num[i] ) : f[j];
		printf("%.2f\n",(double)(f[q]*1.0/100.0));
		scanf("%lf %d" ,&Q, &N);
	}
	return 0;
}
