/*
Convert to Palindrome

Problem statement

A palindrome is a sequence of character that has the property of reading the same way either in direction. You are given a function,

char *ConvertPalindrome(char* str)

The function accepts the string str. Implement the function to find and return the minimum characters required to append at the end of string str to make it palindrome

Assumption

1.String will contain only lower case English alphabets.

2.Length of string is greater than or equal to 1

Note:

1. If string is already palindrome return “NULL”.

2. You have to find the minimum characters required to append at the end of string to make it palindrome.

Example:

Sample Input

abcdc

Sample Output

ba

Explanation:

If we append ‘ba’ at the end of the string ‘abcdc’ it becomes abcdcba i.e. a palindrome.


Case 1
Input (stdin)
abcdc

Output (stdout)
ba

Case 2
Input (stdin)
ab

Output (stdout)
a
*/

#include <stdio.h>
#include <string.h>

int main()
{
  char str[1000], res[500];
  scanf("%s", str);
  int len = strlen(str), index = 0;
  for(int i = 0; i < len; i++){
    if(str[i] != str[len-1]) res[index++] = str[i];
    else break;
  }
  int res_len = strlen(res);
  if(res_len == 0) printf("NULL");
  else{
  	for(int i = res_len-1; i >= 0; i--){
      printf("%c", res[i]);
    }
  }
   return 0;
}
