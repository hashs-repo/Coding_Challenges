/*
   Non repeating elements
   Write a program to eliminate the common elements in the given 2 arrays and print only the non repeating elements and the total.





   Sample Input:

   5 4

   1 2 8 6 5

   2 6 8 10



   Sample Output:

   1 5 10

   3


   Case 1
   Input (stdin)
   5 4
   1 2 8 6 5
   2 6 8 10

   Output (stdout)
   1 5 10
   3
   Case 2
   Input (stdin)
   5 5
   10 20 30 40 50
   60 70 80 90 50

   Output (stdout)
   10 20 30 40 60 70 80 90
   8
   */

#include <stdio.h>
int main(void)
{
	int n, m;
	scanf("%d%d", &n,&m);
	int len = n+m, input[len], res[99]={0};
	for(int i = 0; i < len; i++){
		scanf("%d", &input[i]);
		res[input[i]]++;
	}
	int count = 0;
	for(int i = 0; i < len; i++){
		if(res[input[i]] == 1){
			printf("%d ", input[i]);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;
}
