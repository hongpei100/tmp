#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	printf("NT10=%d\n",a/10);
	a = a - 10*(a/10);
	printf("NT5=%d\n",a/5);
	a = a - 5*(a/5);	
	printf("NT=%d\n",a/1);
} 
