/*
Move hyphen to the beginning
Implement the following function: char* MoveHyphen(char str[], int n); The function accepts a string ‘str’ of length ‘n’, that contains alphabets and hyphens (-). Implement the function to move all hyphens (-) in the string to the front of the given string. Note: Return null if str is null.

Input Format

Given input is in given string

Output Format

Output is in string format

Refer the sample output for formatting

Sample Input:

Move-Hyphens-to-Front

Sample Output:

---MoveHyphenstoFront

Explanation:

The string “Move-Hyphens-to-Front” has 3 hyphens(-) which are moved to the front of the string thus output is “---MoveHyphenstoFront”.




Case 1
Input (stdin)
Move-Hyphens-to-Front

Output (stdout)
---MoveHyphenstoFront
Case 2
Input (stdin)
Hello-world-is

Output (stdout)
--Helloworldis
*/

#include <stdio.h>
int main()
{
  char input[999], result[999];
  int i=0,c=0,j=0;
  scanf("%s", input);
  for(int i = 0; input[i] != 0; i++){
    if(input[i] == '-') c++;
    else result[j++] = input[i];
  }
  
  while(c){
    printf("-");	
    c--;
  }
  printf("%s", result);
}
