/*
�ַ�ͳ�� ��20 �֣�
���д�����ҳ�һ�θ��������г�����Ƶ�����Ǹ�Ӣ����ĸ��

�����ʽ��
������һ���и���һ�����Ȳ����� 1000 ���ַ������ַ����� ASCII ���������ɼ��ַ����ո���ɣ����ٰ��� 1 ��Ӣ����ĸ���Իس��������س��������ڣ���

�����ʽ��
��һ�����������Ƶ����ߵ��Ǹ�Ӣ����ĸ������ִ���������Կո�ָ�������в��У����������ĸ����С���Ǹ���ĸ��ͳ��ʱ�����ִ�Сд�����Сд��ĸ��

����������
This is a simple TEST.  There ARE numbers and other symbols 1&2&3...........
���������
e 7
*/
#include <stdio.h>

int main ()
{
	int time[26] = {0};
	char a;
	char max;
	int max_num = 0;
	a=getchar();
	while ( a != '\n' ) {
		if ( a>='a' && a<='z' ) {
			time[a-'a']++;
			if ( ( time[a-'a']>max_num ) || (time[a-'a']==max_num && a<max ) ) {
				max_num = time[a-'a'];
				max = a;
			}
		} else if ( a>='A' && a<='Z' ) {
			time[a-'A']++;
			if ( ( time[a-'A']>max_num ) || ( time[a-'A']==max_num && 'a'+a-'A'<max ) ) {
				max_num = time[a-'A'];
				max = 'a'+a-'A';
			}
		}
		a=getchar();
	}
	printf("%c %d\n" , max , max_num );
	return 0;
}
