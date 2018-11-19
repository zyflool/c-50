/*
旧键盘 （20 分）
旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。现在给出应该输入的一段文字、以及实际被输入的文字，请你列出肯定坏掉的那些键。

输入格式：
输入在 2 行中分别给出应该输入的文字、以及实际被输入的文字。
每段文字是不超过 80 个字符的串，由字母 A-Z（包括大、小写）、数字 0-9、以及下划线 _（代表空格）组成。题目保证 2 个字符串均非空。

输出格式：
按照发现顺序，在一行中输出坏掉的键。其中英文字母只输出大写，每个坏键只输出一次。题目保证至少有 1 个坏键。

输入样例：
7_This_is_a_test
_hs_s_a_es
输出样例：
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
