/*
Binary to decimal equivalent
Write a program to convert a binary number to an equivalent decimal value.



Sample Input:

1010



Sample Output:

10


Case 1
Input (stdin)
1010

Output (stdout)
10
Case 2
Input (stdin)
11111

Output (stdout)
31
*/

#include <stdio.h>
//#include <math.h>

int power(int base, int exp){
  int res = 1;
  while(exp--){
    res = res * base;
  }
  return res;
}

int main()
{	
  	int n, c = 0, res = 0;
  	scanf("%d", &n);
  	while(n > 0){
      	res = res + (n%10)*power(2,c++);
      	n/=10;
    }
  	printf("%d", res);
   return 0;
}
