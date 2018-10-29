#include <stdio.h>

int n , count;

void work ( char a , int time )
{
	if ( time==n && a=='A'){
		count++;
		if ( count==10000 )
		    count = 0 ;
	    return ;
	} else if ( time==n ) {
		return ;
	} else if ( a=='B' ) {
		work( 'A' , time+1 );
		work( 'C' , time+1 );
	} else if ( a=='C' ) {
		work( 'A' , time+1 );
		work( 'B' , time+1 );
	} else if ( a=='A' ) {
		work( 'C' , time+1 );
		work( 'B' , time+1 );
	}
}


int main (void)
{
	scanf("%d" , &n);
	while (n) {
		count = 0;
		work('B',1);
		work('C',1);
		printf("%d\n" , count);
		scanf("%d" , &n);
	}
	return (0);
}
