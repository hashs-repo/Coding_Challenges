#include<iostream>

using namespace std;
int maxSubsequence(int a[],int n)
{
	int max=0,i,count=0,flag=0;
	for(i=0;i<n-1;i++)
	{
		int dif = a[i+1]-a[i];
		if(dif==1||dif==0)
		{
			count++;
			flag=1;
		}
		else
		{ 
			if(count>max)
				max=count;
			count=0;
		}
	}
	if(flag)
		return count>max?count+1:max+1;	
	else
		return count;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	cout<<maxSubsequence(a,n);
}
