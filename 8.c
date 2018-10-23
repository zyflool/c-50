#include <stdio.h>

int main (void) 
{
	int n;
	scanf("%d",&n);
	while ( n!=0 ){
		int a[n] , i , max=0 , min=99999 , sum=0;
		for(i=0 ; i<n ; i++){
			scanf("%d",&a[i]);
			if ( a[i] > max ){
				max = a[i];
			} else if ( a[i] < min ){
				min = a[i]; 
			}
			sum+=a[i];
		}
		float ave= (float)(sum-max-min)/(n-2);
		printf("%0.2f\n" , ave);
		scanf("%d",&n);
    }
	return (0);
}
