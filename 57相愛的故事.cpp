#include<stdio.h>

int main(){
	int a,b,i;
	scanf("%d",&a);
	
	for(i = 1; i < a; i++){
		if(i%5 ==0 && i%7 ==0)
		printf("%d ",i);
	}
	printf("\n");
} 
