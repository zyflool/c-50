#include <stdio.h>

int main (void)
{
	int a , b , i , res;
	scanf("%d%d" , &a , &b);
	for ( i = (a>b)?b:a ; i>=1 ; i-- ) {  //���Լ�� * ��С������  = �������ĳ˻� 
		if ( a%i==0 && b%i==0 ) {
			res = a*b/i ;
			break;
		}
	}
	printf("%d" , res);
	return (0);
}
