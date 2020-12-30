/*
   Operation Choices
   You are required to implement the following function.
   int OperationChoices(int c, int a, int b )
   The function accepts 3 positive integers ‘a’ , ‘b’ and ‘c ‘ as its arguments. Implement the function to return.

   ( a+ b ) , if c=1

   ( a - b ) , if c=2

   ( a * b ) , if c=3

   (a / b) , if c =4



Assumption: All operations will result in integer output.
Example:

Input

c:1

a:12

b:16

Output:

Since ‘c’=1, (12+16) is performed which is equal to 28, hence 28 is returned.


Sample Input

c: 2

a: 16

b: 20

Sample Output

-4

Case 1
Input (stdin)
2
16
20

Output (stdout)
-4

Case 2
Input (stdin)
1
12
16

Output (stdout)
28
*/

#include <stdio.h>
int OperationChoices(int c, int a, int b){
	if(c == 1) return a+b;
	else if(c == 2) return a-b;
	else if(c == 3) return a*b;
	return a/b;
}
int main(void)
{
	int c, a, b;
	scanf("%d%d%d", &c, &a, &b);
	printf("%d", OperationChoices(c, a, b));
	return 0;
}
