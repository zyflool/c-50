/*
人口普查 （20 分）
某城镇进行人口普查，得到了全体居民的生日。现请你写个程序，找出镇上最年长和最年轻的人。

这里确保每个输入的日期都是合法的，但不一定是合理的——
假设已知镇上没有超过 200 岁的老人，而今天是 2014 年 9 月 6 日，所以超过 200 岁的生日和未出生的生日都是不合理的，应该被过滤掉。

输入格式：
输入在第一行给出正整数 N，取值在(0,10^5]；随后 N 行，每行给出 1 个人的姓名（由不超过 5 个英文字母组成的字符串）、
以及按 yyyy/mm/dd（即年/月/日）格式给出的生日。题目保证最年长和最年轻的人没有并列。

输出格式：
在一行中顺序输出有效生日的个数、最年长人和最年轻人的姓名，其间以空格分隔。

输入样例：
5
John 2001/05/12
Tom 1814/09/06
Ann 2121/01/30
James 1814/09/05
Steve 1967/11/20
输出样例：
3 Tom John
*/
#include <stdio.h>
#include <string.h>

int main ()
{
	int n;
	scanf("%d" , &n );
	int count = 0;
	int max_year = 2014;
	int max_mon = 9;
	int max_day = 6;
	int min_year = 1814;
	int min_mon = 9;
	int min_day = 6;
	char max_name[5];
	char min_name[5];
	int i;
	for ( i=0 ; i<n ; i++ ){
		char name[5];
		int year;
		int mon;
		int day;
		char c;
		scanf("%s" , name );
		scanf("%d/%d/%d" , &year , &mon , &day );
		if ( (year<1814) || 
		     (year==1814 && mon<9) || 
			 (year==1814 && mon==9 && day<6) || 
			 (year>2014) || 
			 (year==2014 && mon>9) || 
			 (year==2014 && mon==9 && day>6 ) )
		{
			count++;
		} else {
			if ( ( year>min_year ) || 
			     (year==min_year && mon>min_mon) || 
				 (year==min_year && mon==min_mon && day>min_day) ) 
			{
				min_year = year;
				min_mon = mon;
				min_day = day;
				strncpy(min_name , name , 5);
			}
			if ( ( year<max_year ) || 
			     (year==max_year && mon<max_mon) || 
				 (year==max_year && mon==max_mon && day<max_day) )
			{
				max_year = year;
				max_mon = mon;
				max_day =day;
				strncpy(max_name , name , 5);
			}
		}
	}
	printf("%d %s %s" , n-count , max_name , min_name);
	return 0;
}
