/*
���̴���һ��� ��20 �֣�
���ڼ�������ԣ���ɫ���������ص��Ӧ��һ�� 24 λ����ֵ��
�ָ���һ���ֱ���Ϊ M��N �Ļ���Ҫ�����ҳ����̴��е�һ��죬���ж�һ�޶���ɫ���Ǹ����ص㣬���Ҹõ����ɫ������Χ 8 ���������ص���ɫ���ִ�

�����ʽ��
�����һ�и����������������ֱ��� M �� N���� 1000������ͼ��ķֱ��ʣ�
�Լ� TOL�����������ص������ڵ����ɫ����ֵ��ɫ��� TOL �ĵ�ű����ǡ�
��� N �У�ÿ�и��� M �����ص���ɫֵ����Χ�� [0,2^24) �ڡ�����ͬ�����ּ��ÿո�� TAB �ֿ���

�����ʽ��
��һ���а��� (x, y): color �ĸ�ʽ����������ص��λ���Լ���ɫֵ��
����λ�� x �� y �ֱ��Ǹ�������ͼ������е��С��б�ţ��� 1 ��ʼ��ţ���
��������ĵ㲻Ψһ������� Not Unique����������ĵ㲻���ڣ������ Not Exist��

�������� 1��
8 6 200
0 	 0 	  0 	   0	    0 	     0 	      0        0
65280 	 65280    65280    16711479 65280    65280    65280    65280
16711479 65280    65280    65280    16711680 65280    65280    65280
65280 	 65280    65280    65280    65280    65280    165280   165280
65280 	 65280 	  16777015 65280    65280    165280   65480    165280
16777215 16777215 16777215 16777215 16777215 16777215 16777215 16777215
������� 1��
(5, 3): 16711680
�������� 2��
4 5 2
0 0 0 0
0 0 3 0
0 0 0 0
0 5 0 0
0 0 0 0
������� 2��
Not Unique
�������� 3��
3 3 5
1 2 3
3 4 5
5 6 7
������� 3��
Not Exist
*/
#include <stdio.h>

int tol;
int paint[1000][1000];
int m;
int n;

int check ( int a , int b )
{
	if ( a-b > 0 ) {
		if ( a-b > tol ) {
			return 1;
		} else {
			return 0;
		}
	} else {
		if ( b-a > tol ) {
			return 1;
		} else {
			return 0;
		}
	}
}

int time ( int x , int y ) 
{
	int i;
	int j;
	for ( i=0 ; i<n ; i++ )
	    for ( j=0 ; j<m ; j++ )
	    	if ( paint[i][j]==paint[x][y] && x!=i && y!=j )
	    	    return 0;
	return 1;
}

int main ()
{
	scanf("%d %d %d" , &m , &n , &tol );
	int i;
	int j;
	int count = 0;
	int x;
	int y;
	
	for ( i=0 ; i<n ; i++ )
		for ( j=0 ; j<m ; j++ )
			scanf("%d" , &paint[i][j]);
			
	for ( i=1 ; i<m-1 ; i++ ) {
		
		if ( check(paint[0][i],paint[0][i-1])&&
			 check(paint[0][i],paint[0][i+1])&&
			 check(paint[0][i],paint[1][i-1])&&
			 check(paint[0][i],paint[1][i])&&
			 check(paint[0][i],paint[1][i+1])&&time(0,i) ) {
			x = 0;
			y = i;
			count++; 
		}
		
		if ( check(paint[n-1][i],paint[n-1][i-1])&&
	    	 check(paint[n-1][i],paint[n-1][i+1])&&
		     check(paint[n-1][i],paint[n-2][i-1])&&
			 check(paint[n-1][i],paint[n-2][i])&&
			 check(paint[n-1][i],paint[n-2][i+1])&&time(n-1,i) ) {
			x = n-1;
			y = i;
			count++; 
		}
		
	}
	
	for ( i=1 ; i<n-1 ; i++ ) {
		
		if ( check(paint[i][0],paint[i][1])&&
	    	 check(paint[i][0],paint[i-1][0])&&
		     check(paint[i][0],paint[i-1][1])&&
			 check(paint[i][0],paint[i+1][0])&&
			 check(paint[i][0],paint[i+1][1])&&time(i,0) ) {
			x = i;
			y = 0;
			count++; 
		}
		
		if ( check(paint[i][m-1],paint[i][m-1])&&
	    	 check(paint[i][m-1],paint[i+1][m-1])&&
		     check(paint[i][m-1],paint[i+1][m-2])&&
			 check(paint[i][m-1],paint[i-1][m-2])&&
			 check(paint[i][m-1],paint[i-1][m-1])&&time(i,m-1) ) {
			x = i;
			y = m-1;
			count++; 
		}
		
	}
	
	if ( check(paint[0][0],paint[0][1])&&
	     check(paint[0][0],paint[1][1])&&
		 check(paint[0][0],paint[1][0])&&time(0,0) ) {
		x = 0;
		y = 0;
		count++;
	}
	
	if ( check(paint[0][m-1],paint[0][m-2])&&
	     check(paint[0][m-1],paint[0][m-2])&&
		 check(paint[0][m-1],paint[1][m-1])&&time(0,m-1) ) {
		x = 0;
		y = m-1;
		count++;
	}
	
	if ( check(paint[n-1][0],paint[n-2][0])&&
	     check(paint[n-1][0],paint[n-2][1])&&
		 check(paint[n-1][0],paint[n-1][1])&&time(n-1,0) ) {
		x = n-1;
		y = 0;
		count++;
	}
	
	if ( check(paint[n-1][m-1],paint[n-1][m-2])&&
	     check(paint[n-1][m-1],paint[n-2][m-2])&&
		 check(paint[n-1][m-1],paint[n-2][m-1])&&time(n-1,m-1) ) {
		x = n-1;
		y = m-1;
		count++;
	}
	
	for ( i=1 ; i<n-1 ; i++ ) {
		for ( j=1 ; j<m-1 ; j++ ) {
			if ( check(paint[i][j],paint[i][j-1])&&
			     check(paint[i][j],paint[i][j+1])&&
		 	     check(paint[i][j],paint[i+1][j-1])&&
	 		     check(paint[i][j],paint[i+1][j+1])&&
			     check(paint[i][j],paint[i-1][j-1])&&
			     check(paint[i][j],paint[i-1][j+1])&&
			     check(paint[i][j],paint[i+1][j])&&
			     check(paint[i][j],paint[i-1][j])&&time(i,j) ) {
				x = i;
				y = j;
				count++;
			}
		}
	}
	
	if ( count==1 ) {
		printf("(%d, %d): %d\n" , x+1 , y+1 , paint[x][y] );
	} else if ( count>1 ) {
		printf("Not Unique\n");
	} else {
		printf("Not Exist\n");
	}
	return 0;
}
