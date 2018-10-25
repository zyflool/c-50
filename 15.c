#include <stdio.h>

int main (void)
{
	int n , i;
	char s[1001];
	scanf("%d", &n);
	for(i=1 ; i<=n ; i++){
		int m;
		scanf("%d" , &m);
		s[i]=(char) m;
	}
	for(i=1 ; i<=n ; i++){
		putchar(s[i]);
	}
	return (0);
}
