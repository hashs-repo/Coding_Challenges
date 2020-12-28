#include<stdio.h>
int res(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(n%i == 0) sum += i;
	}
	return sum;
}
int main(void){
	int n;
	scanf("%d", &n);
	printf("%d", res(n));
	return 0;
}
