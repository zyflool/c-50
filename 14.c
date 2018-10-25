#include <stdio.h>

int main (void)
{
	int n , a[100];
	scanf("%d",&n);
	while ( n ) {
		int i , min=99999 , s;
		for(i=1 ; i<=n ; i++) {
			scanf("%d", &a[i]);
			if ( min>a[i] ) {
				min = a[i];
				s = i;
			}
		}
		int tmp = a[1];
		a[1] = a[s];
		a[s] =tmp;
		for( i=1 ; i<=n ; i++ ){
			printf("%d ", a[i]);
		}
		printf("\n");
		scanf("%d" , &n);
	}
	return (0);
}
