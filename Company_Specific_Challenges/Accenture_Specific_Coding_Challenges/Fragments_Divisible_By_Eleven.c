/*
Fragments divisible by eleven
Problem statement

You are given a function,

def DivisibilityByEleven(num):

The function accepts an integer 'num' as input. You have to implement the function such that it returns the number of contiguous integer fragments of 'num' that are divisible by 11. Contiguous integer fragments of a number, say 1273, are:

Example:

Input:

1215598

Output:

4

Explanation: 55, 121, 12155 and 15598 are contiguous fragments of the number 1215598 that are divisible by 11.


Case 1
Input (stdin)
1215598

Output (stdout)
4
Case 2
Input (stdin)
55

Output (stdout)
1
*/
	
#include <stdio.h>

int DivisibilityByEleven(int num){
  int res = 0, rev = 0, len = 0;
  while(num > 0){
    rev = rev*10 + num%10;
    num /= 10;
    len++;
  }
  int arr[len];
  for(int i = 0; i < len; i++){
    arr[i] = rev%10;
    rev/=10;
  }
  int var;
  for(int i = 0; i < len; i++){
    var = arr[i]*10+arr[i+1];
    if((var % 11) == 0) res++;
    for(int j = i+2; j < len; j++){
      if(((var = var*10+arr[j]) % 11) == 0) res++;
    }
  }
  return res;
}
int main()
{
  int num;
  scanf("%d", &num);
  printf("%d", DivisibilityByEleven(num));
  return 0;
}
