#include <stdio.h>

int main (void) 
{
	int n , m;
	scanf("%d",&n);
	while ( n!=0 ){
		scanf("%d",&m);
		int a[n+1][m+1] , i , j , sum=n;
		float stuave[n+1]={0.00} , subave[m+1]={0.00};
		for(i=1 ; i<=n ; i++){
			for(j=1 ; j<=m ; j++){
				scanf("%d", &a[i][j]);
				stuave[i]+=a[i][j];
				subave[j]+=a[i][j];
			}
		}
		for(i=1 ; i<=n ; i++){
			stuave[i]/=m;
			printf("%.2f ", stuave[i]);
		}
		printf("\n");
		for(i=1 ; i<=m ; i++){
			subave[i]/=n;
			printf("%.2f ", subave[i]);
		}
		printf("\n");
		for(i=1 ; i<=n ; i++){
			for(j=1 ; j<=m ; j++){
				if ( a[i][j]<subave[j] ){
					sum--;
					break;
				}
			}
		}
		printf("%d\n", sum);
		scanf("%d",&n);
    }
	return (0);
}
