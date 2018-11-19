/*
万绿丛中一点红 （20 分）
对于计算机而言，颜色不过是像素点对应的一个 24 位的数值。
现给定一幅分辨率为 M×N 的画，要求你找出万绿丛中的一点红，即有独一无二颜色的那个像素点，并且该点的颜色与其周围 8 个相邻像素的颜色差充分大。

输入格式：
输入第一行给出三个正整数，分别是 M 和 N（≤ 1000），即图像的分辨率；
以及 TOL，是所求像素点与相邻点的颜色差阈值，色差超过 TOL 的点才被考虑。
随后 N 行，每行给出 M 个像素的颜色值，范围在 [0,2^24) 内。所有同行数字间用空格或 TAB 分开。

输出格式：
在一行中按照 (x, y): color 的格式输出所求像素点的位置以及颜色值，
其中位置 x 和 y 分别是该像素在图像矩阵中的列、行编号（从 1 开始编号）。
如果这样的点不唯一，则输出 Not Unique；如果这样的点不存在，则输出 Not Exist。

输入样例 1：
8 6 200
0 	 0 	  0 	   0	    0 	     0 	      0        0
65280 	 65280    65280    16711479 65280    65280    65280    65280
16711479 65280    65280    65280    16711680 65280    65280    65280
65280 	 65280    65280    65280    65280    65280    165280   165280
65280 	 65280 	  16777015 65280    65280    165280   65480    165280
16777215 16777215 16777215 16777215 16777215 16777215 16777215 16777215
输出样例 1：
(5, 3): 16711680
输入样例 2：
4 5 2
0 0 0 0
0 0 3 0
0 0 0 0
0 5 0 0
0 0 0 0
输出样例 2：
Not Unique
输入样例 3：
3 3 5
1 2 3
3 4 5
5 6 7
输出样例 3：
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
