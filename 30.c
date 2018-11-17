/*
部分A+B （15 分）
正整数 A 的“DA(为 1 位整数）部分”定义为由 A 中所有 DA组成的新整数 PA。
例如：给定 A=3862767，DA=6，则 A 的“6 部分”PA是66，因为 A 中有 2 个 6。
现给定 A、DA、B、DB，请编写程序计算 PA+PB。

输入格式：
输入在一行中依次给出 A、DA、B、DB，中间以空格分隔，其中 0<A,B<10^10。

输出格式：
在一行中输出 PA+PB的值。

输入样例 1：
3862767 6 13530293 3
输出样例 1：
399
输入样例 2：
3862767 1 13530293 8
输出样例 2：
0
*/
#include <stdio.h>

int work (char n[] , int m)
{
	int res = 0;
	int t = 1;
	int i;
	for ( i=9 ; i>=0 ; i-- ) {
		if ( n[i]>='0' && n[i]<='9' ) {
			if ( n[i]-'0' == m ) {
			    res += t*m;
			    t *= 10;
			}
		}
	}
	return res;
}

int main ()
{
	char a[10];
	char b[10];
	int da;
	int db;
	scanf("%s" , &a);
	scanf("%d" , &da);
	scanf("%s" , &b);
	scanf("%d" , &db);
	int pa = work(a,da);
	int pb = work(b,db);
	printf("%d\n" , pa + pb);
	return 0;
}
