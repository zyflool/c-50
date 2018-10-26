#include <stdio.h>

int main (void)
{	
	int n;
	scanf("%d", &n); 
	while ( n!=0 ) {
		n--;
		int a=0 , e=0 ,i=0 , o=0 , u=0;
	    char str[101]={'\0'} , tmp;
	    int k=0;
	    scanf("%c",&tmp);
	    while(str[k]!='\n'){
			k++;
			scanf("%c",&str[k]);
	    }
		for( k=1 ; str[k]!='\0'&&str[k+1]!='\0' ; k++ ){
			
			switch ( str[k] ){
			case 'a': {a++;break;}
			case 'e': {e++;break;}
			case 'i': {i++;break;}
			case 'o': {o++;break;}
			case 'u': {u++;break;}
			default : ;
			}
		}
		printf("a:%d\n" , a);
		printf("e:%d\n" , e);
		printf("i:%d\n" , i);
		printf("o:%d\n" , o);
		printf("u:%d\n" , u);
		if (n)  
			printf("\n");
	}
	return (0);
}
