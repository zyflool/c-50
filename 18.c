#include <stdio.h>

int a[1001][1001] , sum[1001][1001];  //���嵽��������ˣ��ں����ڲ��ı���������ջ�ջ�Ĵ�С���ݱ������в�ͬ��һ����1M

int main (void)
{
	int t , m , n , x , y ;
	
	scanf("%d" , &t);
	
	while ( t ) {
		scanf("%d  %d  %d  %d" , &m , &n , &x , &y);
		int i , j , max=0;
		
		for ( i=1 ; i<=m ; i++ ) {
			for ( j=1 ; j<=n ; j++ ) {
				sum[i][j] = 0;
			}
		}
		for ( i=1 ; i<=m ; i++ ) {
	 		for ( j=1 ; j<=n ; j++ ) { 
	 			scanf("%d" , &a[i][j]);
				int k , l;
				for ( k=1 ; k<=i ; k++ ){
					for ( l=1 ; l<=j ; l++ ){
						sum[k][l] += a[i][j];
					}
				}
			}
		}
		for ( i=1 ; i<=m-x+1 ; i++ ) {
			for( j=1 ; j<=n-y+1 ; j++ ) {
				int tmp = sum[i][j]-sum[i+x][j]-sum[i][j+y]+sum[i+x][j+y];
				if ( max < tmp )
					max = tmp;
			}
		}
		printf("%d\n" , max);
		t--;
	}
	return (0);
}
