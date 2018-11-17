/*
�˿��ղ� ��20 �֣�
ĳ��������˿��ղ飬�õ���ȫ���������ա�������д�������ҳ��������곤����������ˡ�

����ȷ��ÿ����������ڶ��ǺϷ��ģ�����һ���Ǻ���ġ���
������֪����û�г��� 200 ������ˣ��������� 2014 �� 9 �� 6 �գ����Գ��� 200 ������պ�δ���������ն��ǲ�����ģ�Ӧ�ñ����˵���

�����ʽ��
�����ڵ�һ�и��������� N��ȡֵ��(0,10^5]����� N �У�ÿ�и��� 1 ���˵��������ɲ����� 5 ��Ӣ����ĸ��ɵ��ַ�������
�Լ��� yyyy/mm/dd������/��/�գ���ʽ���������ա���Ŀ��֤���곤�����������û�в��С�

�����ʽ��
��һ����˳�������Ч���յĸ��������곤�˺��������˵�����������Կո�ָ���

����������
5
John 2001/05/12
Tom 1814/09/06
Ann 2121/01/30
James 1814/09/05
Steve 1967/11/20
���������
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
