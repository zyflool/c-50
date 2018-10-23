#include <stdio.h>

int year , mon , day , a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 

void get_sum(char m[])
{
	year = 0;
	mon = 0;
	day = 0;
	int i , n=0;
	for(i=0 ; ; i++){
		if ( m[i]=='/' ){
			if ( n==0 ){
				int j , time=1;
				for(j=i-1 ; j>=0 ; j--){ 
					year+=(m[j]-48)*time;
					time*=10;
				}
			} else if ( n==1 ) {
				int j , time=1;
				for(j=i-1 ; m[j]!='/' ; j--){
					mon+=(m[j]-48)*time;
					time*=10;
				}
			}
			n++;
		} else if ( n==2 && (m[i]<48 || m[i]>57) ){
			int j , time=1;
			for(j=i-1;m[j]!='/';j--){
				day+=(m[j]-48)*time;
				time*=10;
			}
			break;
		}
	}
}

int main (void)
{
	char p[11];
	scanf("%s",p); 
	while ( p[0]!='0' ){
		get_sum(p);
		int res=0;
		if ( year%4==0 ) {
			if ( mon>2 ){
				int i;
				res+=29;
				for (i=1 ; i<mon ; i++){
					if ( i!=2 ){
						res+=a[i];
					}
				} 
				res+=day;
			} else if ( mon==2 ){
				res=31+day;
			} else res+=day;
		} else {
			int i;
			for(i=1 ; i<mon ; i++){
				res+=a[i];
			}
			res+=day;
		}
		printf("%d\n",res);
		scanf("%s",&p);
	}
	return (0);
}
