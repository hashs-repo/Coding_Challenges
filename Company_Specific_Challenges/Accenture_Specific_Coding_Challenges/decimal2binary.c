/*
Decimal to Binary equivalent
Write a program to convert decimal number to binary equivalent number.



Sample Input:

10



Sample Output:

1010


Case 1
Input (stdin)
10

Output (stdout)
1010
Case 2
Input (stdin)
2

Output (stdout)
10
*/

#include <stdio.h>
int main()
{
  	int n;
  	scanf("%d", &n);
  	int res[64], c = 0;
  	while(n > 0){
      	res[c++] = n % 2;
      	n/=2;
    }
  	while(c--) printf("%d", res[c]);	
   return 0;
}
