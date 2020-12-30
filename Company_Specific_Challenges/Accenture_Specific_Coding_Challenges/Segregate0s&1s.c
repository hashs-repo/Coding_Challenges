/*
Segregate 0's and 1's
Write a program to segregate all the 0’s in the left side and 1’s in the right side in the same array.



Sample Input:

5

0 1 0 1 0



Sample Output:

0 0 0 1 1




Case 1
Input (stdin)
5
0 1 0 1 0

Output (stdout)
00011
Case 2
Input (stdin)
6
1 1 0 0 0 0

Output (stdout)
000011
*/
#include <stdio.h>

void segregate(int* arr, int n){
  	int right = n - 1, left = 0;// temp;
	while(left < right){
      if(arr[right] == 1) right--;
      else if(arr[left] == 0) left++;
      else{
        arr[right] = 1;
        arr[left] = 0;
        /*
        temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;
        */
		right--;
        left++;
      }
    }
}
        
int main()
{
  	int n;
  	scanf("%d", &n);
  	int arr[n], c = 0;
  	for(int i = 0; i < n; i++){
      	scanf("%d", &arr[i]);
    }
  	segregate(arr, n);
  	for(int i = 0; i < n; i++){
      	printf("%d", arr[i]);
    }
}

