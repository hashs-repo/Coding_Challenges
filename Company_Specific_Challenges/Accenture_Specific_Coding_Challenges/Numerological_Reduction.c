/*
Numerological reduction
Problem Statement:

 Numerological reduction of a number is the sum of digits calculated recursively until the resulting value is a single digit.

You are given a function,

int FindNumerologicalReduction(int n);

The function accepts a positive integer ‘n’. Implement the function to find and return the numerological reduction of ‘n’.

Assumption: n> = 0

Sample Input:

3245

Sample Output:

5

Explanation:

3245 = 3+2+4+5 = 14

14 = 1+4 = 5

Hence 5 is the numerological reduction of 3245.


Case 1
Input (stdin)
3245

Output (stdout)
5
Case 2
Input (stdin)
12345

Output (stdout)
6
*/

#include<stdio.h>

int main(void){
  int num;
  scanf("%d", &num);
  printf("%d", num%9?num%9:9);
  return 0;
}
