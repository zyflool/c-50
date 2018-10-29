#include <stdio.h>

double n[1001];

void work (int s)
{
	int i;
	n[0] = 0.00;
	for ( i=1 ; i<=s ; i++) {
		if ( i%2==0 ) {
			n[i] = n[i-1] - ( 1.00 / double(i) ) ;
		} else {
			n[i] = n[i-1] + ( 1.00 / double(i) ) ;
		}
	}
}

int main (void)
{
	int m , a[100];
	scanf("%d" , &m);
	int i , max = 0;
	for ( i=1 ; i<=m ; i++ ) {
		scanf("%d" , &a[i]);
		( max<a[i] ) ? max=a[i] : max = max;
	}
	work(max);
	for ( i=1 ; i<m ; i++ )
		printf("%0.2f\n" , n[a[i]]);
	printf("%0.2f" , n[a[m]]);
	return (0);
}
