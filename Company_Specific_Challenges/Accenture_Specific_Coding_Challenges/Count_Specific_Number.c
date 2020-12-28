/*
Count Specific Numbers
Problem Statement:

You are required to implement the following function:

int CountSpecificNumbers(int m, int n);
The function accept two arguments m and n which are integers. You are required to calculate the count of numbers having only 1, 4 and 9 as their digits between the numbers lying in the range m and n both inclusive, and return the same. Return -1 if m>n.



Sample Input:

100

200

Sample Output:

9

Explanation:

The numbers between 100 and 200, both inclusive having only 1,4 and 9 as their digits are 111, 114, 119, 141, 144, 149, 191, 194, 199. The count is 9 hence 9 is returned.


Case 1
Input (stdin)
100
200

Output (stdout)
9
Case 2
Input (stdin)
1
100

Output (stdout)
12
*/
#include <stdio.h>

int condition(int i){
 	int flag = 1;
  	int temp;
  	while(i > 0){
      	temp = i%10;
      	if(temp == 1 || temp == 4 || temp == 9);
      	else{
          	flag = 0;
          	break;
        }
      	i /= 10;
    }
  	return flag;
}
int CountSpecificNumbers(int m, int n){
  	int res = 0;
	for(int i = m; i <= n; i++){
      if(condition(i)) res++;
    }
  return res;
}
int main()
{
  	int m, n;
  	scanf("%d%d", &m, &n);
  	if(m > n) printf("-1");
  	else printf("%d", CountSpecificNumbers( m, n));
  	return 0;
}
