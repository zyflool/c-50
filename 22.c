#include <stdio.h>

int main (void)
{
	int c1 , c2 , hou , min , sec;
	scanf("%d  %d" , &c1 , &c2);
	sec = (c2-c1)/100;
	if( ( (double)(c2-c1)/100.0 - (c2-c1)/100 ) >= 0.5 )
		sec++;
	min = sec/60;
	sec = sec - min*60;
	hou = min/60;
	min = min - hou*60;
	if ( hou<10 )
		printf("0");
	printf("%d:" , hou);
	if ( min<10 ) 
		printf("0");
	printf("%d:" , min);
	if ( sec<10 )
		printf("0");
	printf("%d" , sec);
	return (0);
}
