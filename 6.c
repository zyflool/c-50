#include <stdio.h>

void sort (int a[] , int len)
{
	int i , j;
	for(i=1 ; i<=len ; i++){
		for(j=1 ; j<=len-i ; j++){
			if ( a[j]>=0 && a[j+1]<=0 ){//大小 
				if( a[j]<-a[j+1] ){ 
					int tmp = a[j];
					a[j] = a[j+1];
					a[j+1] = tmp;
				}
			} else if ( a[j]<=0 && a[j+1]<=0 ){//小小 
				if( -a[j]<-a[j+1] ){
					int tmp = a[j];
					a[j] = a[j+1];
					a[j+1] = tmp;
				}
			} else if ( a[j]<=0 && a[j+1]>=0 ){//小大 
				if( -a[j]<a[j+1] ){
					int tmp = a[j];
					a[j] = a[j+1];
					a[j+1] = tmp;
				}
			} else if ( a[j]>=0 && a[j+1]>=0 ){//大大 
				if( a[j]<a[j+1] ){
					int tmp = a[j];
					a[j] = a[j+1];
					a[j+1] = tmp;
				}
			}
		}
	}
}

int main (void) 
{
	int n;
	scanf("%d",&n);
	while ( n!=0 ){
		int m[n+1],i;
		for(i=1; i<=n ; i++){
			scanf("%d", &m[i]);
		}
		sort(m,n);
		for(i=1; i<=n ; i++){
			printf("%d ",m[i]);
		}
		printf("\n");
		scanf("%d", &n);
	}
	return (0);
}
