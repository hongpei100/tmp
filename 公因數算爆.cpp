#include<stdio.h>

int main(){
	int a,b,c;
	int record = 0;
	scanf("%d%d",&a,&b);
	if(a > b){
		for(c = 1; c < b; c++){
			if((a%c) ==0 && (b%c) ==0) record = c;
		}
	}
	if(a < b){
		for(c = 1; c < a; c++){
			if((a % c) ==0 && (b%c) ==0) record = c;
		}
	}
	printf("%d\n",record);
} 
