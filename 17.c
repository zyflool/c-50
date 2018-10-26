#include <stdio.h>

#define NUMBER 10001

int prinum[NUMBER];

void work( int max )
{
	prinum[1]=2;
	int i , count=1;
	for ( i=3 ; ; i++ ) {
		if ( count==max ) {
		    break;
		}
		bool jud=true;
		int k;
		for ( k=count ; k>=1 ; k-- ) {
			if ( i%prinum[k]==0 ) {
				jud = false;
				break;
			}
		}
		if ( jud ) {
			prinum[++count] = i;
		}
	}
}

int main (void)
{
	int m , n;
	scanf("%d %d" , &m , &n );
	work(n);
	int i , count=0;
	for ( i=m ; i<=n ; i++ ) {
		if (count==9) {
			printf("%d\n" , prinum[i]);
			count = 0;
		} else {
			printf("%d " , prinum[i]);
			count++;
		}
	}
	return (0);
}
