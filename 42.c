/*
Problem Description

��������һ�仰:"��������Ʈ�������ܲ���������"����ʵҪ���ܰ������ĵ�������ʵҲ���ѣ�ѧ�㰲ȫ֪ʶ�Ϳ��ԡ�
���ȣ����Ǿ�Ҫ����һ����ȫ�����롣��ʲô��������Žа�ȫ���أ�һ����˵һ���Ƚϰ�ȫ����������Ӧ��������������������
(1).���볤�ȴ��ڵ���8���Ҳ�Ҫ����16��
(2).�����е��ַ�Ӧ���������桰�ַ�����������е��������顣
���ĸ��ַ����ֱ�Ϊ��
1.��д��ĸ��A,B,C...Z;
2.Сд��ĸ��a,b,c...z;
3.���֣�0,1,2...9;
4.������ţ�~,!,@,#,$,%,^;
����һ�����룬�����������ж����ǲ���һ����ȫ�����롣
 
Input
�������ݵ�һ�а���һ����M��������M�У�ÿ��һ�����루����������Ϊ50�����������������������ַ���
 
Output
����ÿ������ʵ�����ж���������ǲ���һ����ȫ�����룬�ǵĻ����YES���������NO��
 
Sample Input
3
a1b2c3d4
Linle@ACM
^~^@^@!%
 
Sample Output
NO
YES
NO
*/
#include <stdio.h>
#include <string.h>

int main ()
{
	int n;
	scanf("%d" , &n );
	while ( n-- ) {
		char a[50];
		scanf("%s" , a );
		int lenth = strlen(a);
		int t = 0;
		int k[4] = {0};
		int i;
		for ( i=0 ; i<lenth ; i++ ) {
			if ( a[i]>='a' && a[i]<='z' && !k[0] ) {
				k[0] = 1;
				t++;
			} else if ( a[i]>='A' && a[i]<='Z' && !k[1] ) {
				k[1] = 1;
				t++;
			} else if ( a[i]>='0' && a[i]<='9' && !k[2] ) {
				k[2] = 1;
				t++;
			} else if ( ( a[i]=='~' || a[i]=='!' || a[i]=='@' || a[i]=='#' || 
						a[i]=='$' || a[i]=='%' || a[i]=='^' ) && !k[3] ) {
				k[3] = 1;
				t++;
			}
		}
		if ( t >= 3 ) printf("YES\n");
		else          printf("NO\n");
	}
	return 0;
}