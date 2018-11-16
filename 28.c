/*
Problem Description
对于给定的一个字符串，统计其中数字字符出现的次数。
 

Input
输入数据有多行，第一行是一个整数n，表示测试实例的个数，后面跟着n行，每行包括一个由字母和数字组成的字符串。
 

Output
对于每个测试实例，输出该串中数值的个数，每个输出占一行。
 

Sample Input
2
asdfasdf123123asdfasdf
asdf111111111asdfasdfasdf
 

Sample Output
6
9
*/ 
#include <stdio.h>

int main ( )
{
	int n;
	scanf("%d", &n);
	while ( n-- ) {
		char a;
		scanf("%c" , &a);
		int sum = 0;
		scanf("%c", &a);
		while ( a!='\n' ) {
		    if ( a >= '0' && a <= '9' )
		        sum++;
		    scanf("%c" , &a); 
		}
		printf("%d\n" , sum);
	}
	return 0;
}
