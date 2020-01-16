#include<stdio.h>

int main(){
	
	int i,a;
	int sum = 1;
	scanf("%d",&a);
	printf("1 ");
	for(i = 2; i <= a; i++){
		sum += i;
		printf("+ %d ",i);
	}
	printf("= %d",sum);
}
