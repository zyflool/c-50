#include <stdio.h>

int a[100001];

void sort (int len)
{
	int i , j;
	for(i=1;i<=len;i++){
		int max = i;
		for(j=i+1 ; j<=len ; j++){ 
			if ( a[max] < a[j] ){
				max = j;
			}
		}
		int tmp = a[i];
		a[i] = a[max];
		a[max] = tmp;
	}
}

int main (void)
{
	int n , m;
	scanf("%d %d" , &n , &m);
	while ( n!=0 && m!=0 ){
		int i;
		for(i=1 ; i<=n ; i++){
			scanf("%d" , &a[i] );
		}
		sort(n);
		for(i=1 ; i<=m ; i++){
			if(i>n){
			    break;
			}
			printf("%d " , a[i]);
		}
		printf("\n");
		scanf("%d %d", &n ,&m);
	}
	return (0);
}
