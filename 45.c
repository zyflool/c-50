/*
Problem Description
����һ���ַ������ַ����а���ZOJ�����ַ���������һ����ȣ���ZOJ��˳���������ĳ���ַ�����ʱ��ʣ�µ���Ȼ����ZOJ��˳�������
 
Input
��Ŀ������������,ÿ������ռһ�У�����ZOJ�����ַ��������롰E��ʱ��ʾ���������
1<=length<=100��

Output
����ÿ������,�����һ�У���ʾ����Ҫ�������ַ�����
����ɼ�������

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
