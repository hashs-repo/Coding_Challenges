/*
Intermediate palindrome numbers
 Write a program that it takes a lower limit and upper limit as inputs and print all the intermediate palindrome numbers.



Test Cases:

TestCase 1:

Input :

10 80

Expected Result:

11 22 33 44 55 66 77



Test Case 2:

Input:

100 200

Expected Result:

101 111 121 131 141 151 161 171 181 191


Case 1
Input (stdin)
10
80

Output (stdout)
11 22 33 44 55 66 77

Case 2
Input (stdin)
100
200

Output (stdout)
101 111 121 131 141 151 161 171 181 191
*/


#include <stdio.h>

int ispalindrome(int n){
	int rev = 0, temp = n;
  	while(n){
      	rev = rev*10 + n%10;
      	n/=10;
    }
  	if(rev == temp) return 1;
  	return 0;
}
  		
int main(void)
{
  	int l, u;
  	scanf("%d%d", &l, &u);
  	for(int i = l; i <= u; i++){
      	if(ispalindrome(i)) printf("%d ", i);
    }
  	return 0;
}
