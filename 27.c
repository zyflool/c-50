/*
Problem Description
����һ�ʾ��ѿ��Ա���һ����ȵķ�Ʊ����
�����ķ�Ʊ���Ͱ�����ͼ�飨A�ࣩ���ľߣ�B�ࣩ�����ã�C�ࣩ��
Ҫ��ÿ�ŷ�Ʊ���ܶ�ó���1000Ԫ��ÿ�ŷ�Ʊ�ϣ�������Ʒ�ļ�ֵ���ó���600Ԫ��
�������д�����ڸ�����һ�ѷ�Ʊ���ҳ����Ա����ġ�������������ȵ�������
 

Input
��������������ɲ���������ÿ�����������ĵ�1�а����������� Q �� N������ Q �Ǹ����ı�����ȣ�N��<=30���Ƿ�Ʊ����������� N �����룬ÿ�еĸ�ʽΪ��
m Type_1:price_1 Type_2:price_2 ... Type_m:price_m
���������� m �����ŷ�Ʊ��������Ʒ�ļ�����Type_i �� price_i �ǵ� i ����Ʒ������ͼ�ֵ����Ʒ������һ����дӢ����ĸ��ʾ����NΪ0ʱ��ȫ�������������Ӧ�Ľ����Ҫ�����
 

Output
��ÿ�������������1�У������Ա�������������ȷ��С�����2λ��
 

Sample Input
200.00 3
2 A:23.50 B:100.00
1 C:650.00
3 A:59.99 A:120.00 X:10.00
1200.00 2
2 B:600.00 A:400.00
1 C:200.50
1200.50 3
2 B:600.00 A:400.00
1 C:200.50
1 A:100.00
100.00 0
 

Sample Output
123.50
1000.00
1200.50
*/
#include <stdio.h>
#include <string.h>
int main ()
{
	double Q;
	int N;
	int num[30];
	int f[300000];
	scanf("%lf %d" ,&Q, &N);
	while ( N ) {
        int q = (int)(Q*100);
		int count = 0 ;
		int i;
		for ( i=0 ; i<N ; i++ ) {
			int n;
			scanf("%d" , &n);
			int j;
			int flag = 1 ;
			int sum = 0;
			for ( j=0 ; j<n ; j++ ) {
				char c;
				double m;
				scanf(" %c:%lf" ,&c , &m );
				sum += (int)(m*100);
				if ( ( c != 'A' && c != 'B' && c != 'C' ) || sum > 100000 || m > 600 || sum > q ) {
				    flag = 0;
				}
			}
			if ( flag ) {
				num[count] = sum;
				count++;
			}
		}
		for ( i=0 ; i<=q ; i++ )
			f[i]=0;
		int j;
		for ( i=0 ; i<count ; i++ )
		    for ( j=q ; j>=num[i] ; j-- )
		        f[j] = ( f[j-num[i]]+num[i] > f[j] ) ? ( f[j-num[i]] + num[i] ) : f[j];
		printf("%.2f\n",(double)(f[q]*1.0/100.0));
		scanf("%lf %d" ,&Q, &N);
	}
	return 0;
}
