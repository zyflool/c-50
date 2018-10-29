#include <stdio.h>
#include <math.h>   //sqrt()  ����������ͷ�ļ� 

double work (int x , int y)
{
	int temp = x*x + y*y;
	double res = sqrt(temp);
	return res;
}

int main (void)
{
	int n;
	double m = 0.00;
	scanf("%d" , &n);
	while ( n-- ) {
		int a , b ; 
		scanf("%d %d" , &a , &b);
		double tmp = work(a,b);
		if ( tmp > m )
		    m = tmp;
	}
	printf("%0.2f" , m);
	return (0);
}
