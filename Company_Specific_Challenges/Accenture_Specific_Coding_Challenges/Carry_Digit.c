/*
Carry digit
Problem Statement

A carry is a digit that is transferred to left if sum of digits exceeds 9 while adding two numbers from right-to-left one digit at a time

You are required to implement the following function.

Int NumberOfCarries(int num1 , int num2);

The functions accepts two numbers ‘num1’ and ‘num2’ as its arguments. You are required to calculate and return the total number of carries generated while adding digits of two numbers ‘num1’ and ‘ num2’.

Assumption: num1, num2>=0

Example:

Input
Num 1: 451
Num 2: 349
Output
2
Explanation:

Adding ‘num 1’ and ‘num 2’ right-to-left results in 2 carries since ( 1+9) is 10. 1 is carried and (5+4=1) is 10, again 1 is carried. Hence 2 is returned.

Sample Input

Num 1: 23

Num 2: 563

Sample Output

0


Case 1
Input (stdin)
23 563

Output (stdout)
0

Case 2
Input (stdin)
123 463

Output (stdout)
0
*/

#include <stdio.h>
int main()
{
	int a,b,c,d,count = 0,carry;
  	scanf("%d%d", &a, &b);
  	while(a>0 && b>0){
    	c = a%10;
      	d = b%10;
      	a=a/10;b=b/10;
      	if(c+d+(carry?1:0) > 9){
        	count++;
          	carry++;
        }
    }
  printf("%d", count);
}
