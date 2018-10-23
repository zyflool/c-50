#include <stdio.h>

int kaifang (int m)
{
	int i;
	for (i=1 ; i<=m ; i++) {
		if( i*i> m ){
			return i-1;
		}
	}
}

int judge (int a)
{
	int n=kaifang(a) , i;
	for (i=2 ; i<=n ;i++){
		if ( a%i==0 ){
			return 0;
		}
	}
	return 1;
}


int main (void) 
{
	int i,num=0;
	for (i=1 ; i<=100 ; i++){
		if ( judge(i)==1 ){
			printf("%d ",i);
			num++;
			if ( num==5 ){
				num=0;
				printf("\n");
			}
		}
	}
	return (0);
}
