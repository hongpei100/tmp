#include<stdio.h>

int main(){
	int a,b,i;
	int sum  = 0;
	scanf("%d%d",&a,&b);
	if(a > b){
		for(i = b; i <= a; i++){
			sum += i;
		}
	}
	if(a < b){
		for(i = a; i <= b; i++){
			sum += i;
		}
	}
	printf("%d\n",sum);
} 
