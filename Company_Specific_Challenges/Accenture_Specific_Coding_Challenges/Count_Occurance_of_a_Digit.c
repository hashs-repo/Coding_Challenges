/*
Count occurrences of a digit
Problem Statement:

 You are required to implement the following function:

int CountDigiOoccurrences(int l, int u, int x);

The function accepts 3 positive integers ‘l’, 'u' and 'x' as its arguments. You are required to calculate the number of occurrences of a digit 'x' in the digits of numbers lying in the range between ‘I’ and 'u' both inclusive, and return the same.

Note:

•I < u

•0 < x < 9

Sample Input:

I: 2

u: 13

x: 3

Sample Output:

2

Explanation:

The number of occurrences of digit 3 in the digits of numbers lying in the range [2, 13] both inclusive is 2, ie (3, 13), hence 2 is returned.


Case 1
Input (stdin)
2 13 3

Output (stdout)
2

Case 2
Input (stdin)
1 30 2

Output (stdout)
13
*/


#include<stdio.h>

int main(void){
  int i, j, n, num, temp, c;
  scanf("%d%d%d", &i,&j,&n);
  for(int k = i; k <= j; k++){
    num = k;
    while(num!=0){
      temp = num%10;
      if(temp == n) c++;
      num=num/10;
    }
  }
  printf("%d", c);
  return 0;
}
