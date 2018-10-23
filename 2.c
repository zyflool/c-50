#include <stdio.h>

int main (void) 
{
	int a , b;
	scanf("%d%d", &a, &b);
	if ( a>100 || a<0 || b>100 || b<0 ) {
		printf("it is error.\n");
		return (0);
	}
	switch ( a / 10 ) {
	case 10:{
		if ( b>=60 ){
			printf("it is pass.\n");
		} else {
			printf("it is not pass.\n");
		}
		return (0);
	}
	case 9:{
		if ( b>=60 ){
			printf("it is pass.\n");
		} else {
			printf("it is not pass.\n");
		}
		return (0);
	}
	case 8:{
		if ( b>=60 ){
			printf("it is pass.\n");
		} else {
			printf("it is not pass.\n");
		}
		return (0);
	}	
	case 7:{
		if ( b>=60 ){
			printf("it is pass.\n");
		} else {
			printf("it is not pass.\n");
		}
		return (0);
	}	
	case 6:{
		if ( b>=60 ){
			printf("it is pass.\n");
		} else {
			printf("it is not pass.\n");
		}
		return (0);
	}
	default :
		printf("it is not pass.\n");
	}
	return (0);
}
