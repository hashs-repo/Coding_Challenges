/*
Find the BMI
A person’s body mass index is a simple calculation based on height and weight that classifies the person as underweight, overweight, or normal. The formula for metric unit is,

BMI = weight in kilograms / (height in mesters)2



You are given a function,

Int GetBMICategory(int weight, float height);



The function accepts the weight (an integer number) and height (a floating point number) of a person as its arguments. Implement the function such that it calculations the BMI of the person and returns an integer, the person’s BMI category as per the given rules:

1.      If BMI < 18, return 0.

2.      If 18 >= BMI < 25, return 1.

3.      If 25 >= BMI <30, return 2.

4.      If 30 >= BMI < 40, return 3.

5.      If BMI >= 40, return 4.



Note:

·        Weight > 0 and its unit is kilogram.

·        Height > 0 and its unit is metre.

·        Compute BMI as a floating-point.



Example :

Input:

42

1.54

Output:

0



Explanation:

The person’s weight is 42Kg and height is 1.54 metres BMI = weight in kilograms / (height in meters)2 = 42/(1.54 * 1.54) = 17.70

Since, BMI < 18, as per given rules, the output is 0.



﻿Sample Input:

62

1.52

Sample Output:

2

 


Case 1
Input (stdin)
42
1.54

Output (stdout)
0
Case 2
Input (stdin)
62
1.52

Output (stdout)
2
*/

#include<stdio.h>

int GetBMICategory(int weight, float height){
  float bmi = weight/(height*height);
  if(bmi<18) return 0;
  else if(bmi>=18 && bmi<25) return 1;
  else if(bmi>=25 && bmi<30) return 2;
  else if(bmi>=30 && bmi<40) return 3;
  else return 4;
}

int main(void){
  int weight;
  float height;
  scanf("%d%f", &weight, &height);
  printf("%d", GetBMICategory(weight, height));
  return 0;
}
