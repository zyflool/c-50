#include <stdio.h>

int main (void) 
{
	float a , b , c;
	scanf("%f%f%f", &a , &b , &c);
	if (a+b<=c || b+c<=a || a+c<=b) {
		printf("0\n");
	} else if (a==b && b==c){
		printf("1\n");
	} else if ( a==b || b==c || a==c ){
		printf("2\n");
	} else {
	    printf("3\n");
	}
	return (0);
}
