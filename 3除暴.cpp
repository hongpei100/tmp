#include<stdio.h>

int main(){
	int number;
	int i = 0;
	int total = 0;
	while(scanf("%d",&number) != EOF){
		for(i = 1; i <= number; i++){
			if((i%3)==0) total += i;
		}
		printf("%d\n",total);
		total = 0;
	}
	return 0;
}
