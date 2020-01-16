#include<stdio.h>

int main(){
	int number;
	int i;
	while(scanf("%d",&number) != EOF){
		for(i = 2; i < number; i++){
			if((number%i) == 0){
				printf("NO\n"); break;
			}
		}
		if(i == number) printf("YES\n");
		else if(number <= 1) printf("NO\n");
	}
}
