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

import java.util.*;
class Fragments_Divisible_By_Eleven
{
  public static void main(String args[])
  {
    //Try out your code here
    Scanner ob = new Scanner(System.in);
    int n=ob.nextInt();
    ob.close();
    int k=n,c=0,rev=0;
    while(k>0)
    {
      rev=(rev*10)+k%10;
      c++;
      k=k/10;
    }
    int a[]=new int[c];
    c=0;
    k=0;
    while(rev>0)
    {
      a[k++]=rev%10;
      rev=rev/10;
    }
    for(int i=0;i<k;i++)
    {
      int p=a[i];
      for(int j=i+1;j<k;j++)
      {
        p=p*10+a[j];
        if(p%11==0)
         c++;
      }
    }
    System.out.println(c);
  }
}

