#include <stdio.h>

int main (void)
{
	int a , b , i , res;
	scanf("%d%d" , &a , &b);
	for ( i = (a>b)?b:a ; i>=1 ; i-- ) {  //最大公约数 * 最小公倍数  = 两个数的乘积 
		if ( a%i==0 && b%i==0 ) {
			res = a*b/i ;
			break;
		}
	}
	printf("%d" , res);
	return (0);
}
