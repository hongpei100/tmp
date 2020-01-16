#include<stdio.h>

int main(){
	int i,num;
	int sum = 1;
	scanf("%d",&num);
	for(i = 1; i <= num; i++){
		sum = sum*i;
	}
	printf("%d\n",sum);
}
