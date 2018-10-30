#include <stdio.h>

int main (void)
{
	char a[1001];
	short m[10] = {0};
	scanf("%s" , &a);
	int i = 0;
	while ( a[i]!='\0') {
		switch ( a[i] ) {
		case '0': {
			m[0]++;
			break;
		}
		case '1': {
			m[1]++;
			break;
		}
		case '2': {
			m[2]++;
			break;
		}
		case '3': {
			m[3]++;
			break;
		}
		case '4': {
			m[4]++;
			break;
		}
		case '5': {
			m[5]++;
			break;
		}
		case '6': {
			m[6]++;
			break;
		}
		case '7': {
			m[7]++;
			break;
		}
		case '8': {
			m[8]++;
			break;
		}
		case '9': {
			m[9]++;
			break;
		}
		}
		i++;
	}
	for ( i=0 ; i<10 ; i++ )
		if ( m[i] )
			printf("%d:%hd\n" , i , m[i]);
	return (0);
}
