/*查验身份证 （15 分）
一个合法的身份证号码由17位地区、日期编号和顺序编号加1位校验码组成。校验码的计算规则如下：

首先对前17位数字加权求和，权重分配为：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}；然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：

Z：0 1 2 3 4 5 6 7 8 9 10
M：1 0 X 9 8 7 6 5 4 3 2
现在给定一些身份证号码，请你验证校验码的有效性，并输出有问题的号码。

输入格式：
输入第一行给出正整数N（≤100）是输入的身份证号码的个数。随后N行，每行给出1个18位身份证号码。

输出格式：
按照输入的顺序每行输出1个有问题的身份证号码。这里并不检验前17位是否合理，只检查前17位是否全为数字且最后1位校验码计算准确。如果所有号码都正常，则输出All passed。

输入样例1：
4
320124198808240056
12010X198901011234
110108196711301866
37070419881216001X
输出样例1：
12010X198901011234
110108196711301866
37070419881216001X
输入样例2：
2
320124198808240056
110108196711301862
输出样例2：
All passed
*/
#include <stdio.h>

int main ()
{
	int n;
	scanf("%d" , &n );
	int m = 0;
	int x[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	while ( n-- ) {
		char rec[18];
		int flag = 0;
		scanf("%s" , rec);
		int i;
		for ( i=0 ; i<17 ; i++ ) {
			if ( (rec[i]<'0'||rec[i]>'9') && flag==0 ) {
				m++;
				flag = 1;
			}
		}
		if ( !flag ) {
			int sum = 0;
			for ( i=0 ; i<17 ; i++ )
				sum += (rec[i]-'0')*x[i];
			sum %= 11;
			switch ( sum ) {
			case 0 : {
				if ( rec[17]!='1' ) {
					m++;
					flag = 1;
				}
				break; 
			}
			case 1 : {
				if ( rec[17]!='0' ) {
					m++;
					flag = 1;
				}
				break; 
			}
			case 2 : {
				if ( rec[17]!='x' ) {
					m++;
					flag = 1;
				}
				break; 
			}
			case 3 : {
				if ( rec[17]!='9' ) {
					m++;
					flag = 1;
				}
				break; 
			}
			case 4 : {
				if ( rec[17]!='8' ) {
					m++;
					flag = 1;
				}
				break; 
			}
			case 5 : {
				if ( rec[17]!='7' ) {
					m++;
					flag = 1;
				}
				break; 
			}
			case 6 : {
				if ( rec[17]!='6' ) {
					m++;
					flag = 1;
				}
				break; 
			}
			case 7 : {
				if ( rec[17]!='5' ) {
					m++;
					flag = 1;
				}
				break; 
			}
			case 8 : {
				if ( rec[17]!='4' ) {
					m++;
					flag = 1;
				}
				break; 
			}
			case 9 : {
				if ( rec[17]!='3' ) {
					m++;
					flag = 1;
				}
				break; 
			}
			case 10 : {
				if ( rec[17]!='2' ) {
					m++;
					flag = 1;
				}
				break; 
			}
			}
		}
		if ( flag ) 
			printf("%s\n" , rec );
	}
	if ( !m )
		printf("All passed\n");
	return 0;
}
