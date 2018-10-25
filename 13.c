#include <stdio.h>

int main (void)
{
	short n , i ;
	long a , b , c;
	scanf("%hd",&n);
	for( i=1 ; i<=n ; i++){
		scanf("%ld%ld%ld",&a,&b,&c);
		if ( a+b > c )	printf ("Case #%hd: ture\n", i);  
		else            printf("Case #%hd: false\n", i);
	}
	return (0);
}
