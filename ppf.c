#include<stdio.h>

int main(void){
	int x, y;
	scanf("%d%d", &x, &y);
	if(x%y == 0) printf("%d", x);
	else{
		while(1){
			x=x*10;
			if(x%y == 0) {
				printf("%d", x);
				break;
			}
			else{
				int temp, flag = 0;
				for(int i = 1; i < 10; i++){
					if((x+i)%y == 0){
						printf("%d", x+i);
						flag = 1;
						break;
					}
				}
				if(!flag){
					for(int i = 0; i < 10; i++){
						temp = (x+i)*10; 	
						if(temp % y == 0){
							printf("%d", temp);
							flag = 1;
							break;
						}
					}
				}
				else if(flag) break;
			}
		}
	}
	return 0;
}
