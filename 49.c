/*
�ɼ��� ��20 �֣�
�ɼ����ϻ��˼���������������һ�����ֵ�ʱ�򣬶�Ӧ���ַ��Ͳ�����֡����ڸ���Ӧ�������һ�����֡��Լ�ʵ�ʱ���������֣������г��϶���������Щ����

�����ʽ��
������ 2 ���зֱ����Ӧ����������֡��Լ�ʵ�ʱ���������֡�
ÿ�������ǲ����� 80 ���ַ��Ĵ�������ĸ A-Z��������Сд�������� 0-9���Լ��»��� _������ո���ɡ���Ŀ��֤ 2 ���ַ������ǿա�

�����ʽ��
���շ���˳����һ������������ļ�������Ӣ����ĸֻ�����д��ÿ������ֻ���һ�Ρ���Ŀ��֤������ 1 ��������

����������
7_This_is_a_test
_hs_s_a_es
���������
7TI
*/
#include <stdio.h>
#include <string.h>

void print(int n)
{
	if ( n>=0 && n<26 ) {
		printf("%c" , (char)(n+'A'));
	} else if ( n>=26 && n<36 ) {
		printf("%c" , (char)(n-26+'0'));
	} else {
		printf("_");
	}
}

int get (char c)
{
	if ( c>='a' && c<='z' ) {
		return c-'a';
	} else if ( c>='A' && c<='Z' ) {
		return c-'A';
	} else if ( c>='0' && c<='9' ) {
		return 26+c-'0';
	} else if ( c=='_' ) {
		return 36;
	}
}

int main ()
{
	int x[38] = {0};
	int y[38] = {0}; 
	char a[80];
	char b[80];
	scanf("%s" , a );
	scanf("%s" , b );
	int lenth = strlen(a);
	int i;
	for ( i=0 ; i<lenth ; i++ ) {
		if ( a[i]>='a' && a[i]<='z' ) {
			x[ a[i]-'a' ]++;
		} else if ( a[i]>='A' && a[i]<='Z' ) {
			x[ a[i]-'A' ]++;
		} else if ( a[i]>='0' && a[i]<='9' ) {
			x[ 26+a[i]-'0' ]++;
		} else if ( a[i]=='_' ) {
			x[36]++;
		}
	}
	lenth = strlen(b);
	for ( i=0 ; i<lenth ; i++ ) {
		if ( b[i]>='a' && b[i]<='z' ) {
			y[ b[i]-'a' ]++;
		} else if ( b[i]>='A' && b[i]<='Z' ) {
			y[ b[i]-'A' ]++;
		} else if ( b[i]>='0' && b[i]<='9' ) {
			y[ 26+b[i]-'0' ]++;
		} else if ( b[i]=='_' ) {
			y[36]++;
		}
	}
	for ( i=0 ; i<lenth ; i++ ) {
		int j = get(a[i]);
		if ( x[j] && !y[j] ) {
			print(j);
			x[j] = y[j];
		}
	}
	return 0;
}
