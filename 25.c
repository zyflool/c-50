#include <stdio.h>
#include <math.h> 

int main (void)
{
	double a , b , c , d , n , m;
	scanf("%lf%lf%lf%lf" , &a , &b , &c , &d );  //double ÓÃ %lf   
	n = a * c * ( cos(b) * cos(d) - sin(b) * sin(d) );
	m = a * c * ( sin(d) * cos(b) + sin(b) * cos(d) );  //double cos (double);  double sin (double);  
	printf("%0.2lf" , n);
	if ( m>=0 ) printf("+");
	printf("%0.2lfi" , m);
	return (0);
}
