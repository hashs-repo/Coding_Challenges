/*
Picking Tickets
Consider an array of n tickets prices, tickets. A number, m, is defined as the size of some subsequence, s, of tickets where each element covers an unbroken range of integers. That is to say if you were to sort the elements in s, the absolute difference between any elements j and j+1 would be either 0 or 1. Determine the maximum length of a subsequence chosen from the ticket array.

 

Example:

Tickets =[8,5,4,8,4]

Valid subsequences, sorted, are{4,4,5} and {8,8}.These subsequences have m, values of 3 and 2, respectively. Return 3.

Return:

Int: an integer that denotes the maximum possible value of m.

Constraints:

1<= n <=105

1<= tickets[i] <= 109

 

Sample Input:

STDIN        FUNCTION

---------      ------------------

4           ->  tickets [] size n=4

4           ->  tickets = [4,13,2,3]

13

2

3

Sample Output:

3

 

Explanation:

There are two subsequences of tickets that contain consecutive integers when sorted: {2,3,4} and {13}. These subsequences have m values of 3 and 1, respectively. Return the maximum values of m, which is 3.


Case 1
Input (stdin)
4
4
13
2
3

Output (stdout)
3
Case 2
Input (stdin)
5
8 5 4 8 4

Output (stdout)
3
*/

#include <stdio.h>

//selectio sort
void sort(int *arr, int len){
	int temp, location, min;
  	for(int i = 0; i < len; i++){
      min = arr[i];
      location = i;
      for(int j = i+1; j < len; j++){
        if(min > arr[j]){
          location = j;
          min = arr[j];
        }
      }
      temp = arr[i];
      arr[i] = arr[location];
      arr[location] = temp;
    }     
}

int main(void)
{
  	int n;
  	scanf("%d", &n);
  	int arr[n];
  	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
    }
  	sort(arr, n);
  	int diff, res = 0, c = 1, flag = 0;	
  	for(int i = 0; i < n - 1; i++){
    	diff = arr[i + 1] - arr[i];
      	if(diff == 1 || diff == 0){
          c++;
          flag = 1;
        }
      	else{
          if(res < c) res = c;
          c = 0;
        }
    }
	flag ? c > res ? printf("%d", c + 1) : printf("%d", res + 1) : printf("0");
  	/*if(flag){
      c > res ?printf("%d", c + 1):printf("%d", res + 1);
    }
  	else printf("0");*/
  	return 0;
}

