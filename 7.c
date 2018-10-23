#include <stdio.h>

int main (void) 
{
	int n;
	scanf("%d",&n);
	while ( n!=0 ){
		int a[n] , i , mul=1;
		for(i=0 ; i<n ; i++){
			scanf("%d",&a[i]);
			if ( a[i]%2 != 0 ){
				mul=mul*a[i];
			}
		}
		printf("%d\n", mul);
		scanf("%d",&n);
    }
	return (0);
}
