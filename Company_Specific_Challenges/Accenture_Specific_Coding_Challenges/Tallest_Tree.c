/*
==Tallest tree==

Problem statement

A TreeHeight is represented by the following structure:

struct TreeHeight

{

 int feets;

 int inches;

};

You are given a function,

int TallestTree(struct TreeHeight trees[], int n);

The function accepts an array 'trees' of type 'TreeHeight' consisting of 'n' elements as its argument. 'TreeHeight' consists of two integers 'feets' and 'inches' which represents height of a tree. Implement the function to find the tallest tree among the 'trees' and return its height (in inches).

Height of a tree = (12 * feets) + inches

Assumption:

•feets > 0

•0 > = inches > = 11

Note:

•Computed value lies within integer range.

•Return -1 if trees is null (None, in case of Python).

•trees(0) is the first element.

Sample Input:

Feets        Inches

10 4

23 5

21 2

27 7

Sample Output:

331

Explanation:

Height of trees (in inches):

•trees[0] = (10 * 12) + 4 = 124

•trees[1] = (23 * 12) + 5 = 281

•trees[2] = (21 * 12) + 2 = 254

•trees[3] = (27 * 12) + 7 = 331

Maximum of {124, 281, 254, 331} = 331, thus output is 331.


Case 1
Input (stdin)
4
10 4
23 5
21 2
27 7

Output (stdout)
331

Case 2
Input (stdin)
2
46 10
55 6

Output (stdout)
666
*/

#include<stdio.h>

struct TreeHeight{
  int feets;
  int inches;
};

int TallestTree(struct TreeHeight *trees, int n){
  int max = ((trees[0].feets)*12)+(trees[0].inches);
  for(int i = 1; i < n; i++){
    if(max < ((trees[i].feets)*12)+(trees[i].inches)){
      max = ((trees[i].feets)*12)+(trees[i].inches);
    }
  }
  return max;
}

int main(void){
  int n;
  scanf("%d", &n);
  struct TreeHeight trees[n];
  for(int i = 0; i < n; i++){
    scanf("%d%d", &trees[i].feets, &trees[i].inches);
  }
  printf("%d", TallestTree(trees, n));
}
