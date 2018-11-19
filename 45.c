/*
Problem Description
读入一个字符串，字符串中包含ZOJ三个字符，个数不一定相等，按ZOJ的顺序输出，当某个字符用完时，剩下的仍然按照ZOJ的顺序输出。
 
Input
题目包含多组用例,每组用例占一行，包含ZOJ三个字符，当输入“E”时表示输入结束。
1<=length<=100。

Output
对于每组输入,请输出一行，表示按照要求处理后的字符串。
具体可见样例。

Sample Input
ZZOOOJJJ
ZZZZOOOOOJJJ
ZOOOJJ
E

Sample Output
ZOJZOJOJ
ZOJZOJZOJZOO
ZOJOJO
*/
#include <stdio.h>
#include <string.h>

int main ()
{
	char s[100];
	scanf("%s" , s );
	while ( s[0]!='E' ){
		int z = 0;
		int o = 0;
		int j = 0;
		int len = strlen(s);
		int i;
		for ( i=0 ; i<len ; i++ ) {
			switch ( s[i] ) {
				case 'Z' : { z++; break; }
				case 'O' : { o++; break; }
				case 'J' : { j++; break; }
			}
		}
		while ( z || o || j ) {
			if ( z ) {
				printf("Z");
				z--;
			}
			if ( o ) {
				printf("O");
				o--;
			}
			if ( j ) {
				printf("J");
				j--;
			}
		}
		printf("\n");
		scanf("%s" , s );
	}
	return 0;
}
