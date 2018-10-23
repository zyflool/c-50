#include <stdio.h>

void gcd (int a, int b)
{
	if ( a%b == 0 ){
		printf("%d\n",b);
	} else if ( b%a == 0 ) {
		printf("%d\n",a);
	} else if ( a > b ){
		a = a%b;
		gcd(a,b);
	} else { 
		b=b%a;
		gcd(a,b);
	}
}

int main (void) 
{
	int a,b;
	scanf("%d%d", &a , &b);
	gcd(a,b);
	return (0);
}
