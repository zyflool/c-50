#include <stdio.h>

int main (void)
{
	char a[100];
	int sum = 0;
	short n[3]={0};
	scanf("%s" , &a);
	int i = 0;
	while ( a[i]!='\0' ) {
		sum += (a[i]-48);
		i++;
	}
	n[0] = sum/100;
	n[1] = (sum/10)%10;
	n[2] = sum%10;
	
	for ( i=0 ; i<3 ; i++ ) {
		if ( n[i] ) {
			switch ( n[i] ) {
				case 0: {printf("ling ");break;}
				case 1: {printf("yi ");break;}
				case 2: {printf("er ");break;}
				case 3: {printf("san ");break;}
				case 4: {printf("si ");break;}
				case 5: {printf("wu ");break;}
				case 6: {printf("liu ");break;}
				case 7: {printf("qi ");break;}
				case 8: {printf("ba ");break;}
				case 9: {printf("jiu ");break;}
			}
		}
	}
	return (0);
}
