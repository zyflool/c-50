/*
Problem Description
There are some students in a class, Can you help teacher find the highest student .

Input
There are some cases. The first line contains an integer t, indicate the cases; Each case have an integer n ( 1 ≤ n ≤ 100 ) , followed n students’ height.

Output
For each case output the highest height, the height to two decimal plases(到小数点后两位);

Sample Input
2
3 170.00 165.00 180.00
4 165.00 182.00 172.00 160.00

Sample Output
180.00
182.00

*/
#include <stdio.h>

int main ()
{
	int n;
	scanf("%d" , &n );
	while ( n-- ) {
		int m;
		scanf("%d" , &m );
		double max = 0.00;
		while ( m-- ) {
			double t;
			scanf("%lf" , &t );
			if ( t > max ) 
				max = t; 
		}
		printf("%.2lf\n" , max );
	}
	return 0;
}
