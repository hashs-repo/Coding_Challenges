#include<stdio.h>

int MaximumXOR(int l, int u){
	int res = 0, temp;
	for(int i = l;i <= u; i++){
		for(int j = i;j <= u; j++){
			temp = i ^ j;
			if(res < temp) res = temp;
		}
	}
	return res;
}


int main(void){
	int l, u;
	printf("l: ");
	scanf("%d", &l);
	printf("u: ");
	scanf("%d", &u);
	printf("%d\n", MaximumXOR(l, u));
	return 0;
}
