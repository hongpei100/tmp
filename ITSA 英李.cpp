#include<stdio.h>

int main(){
	
	int inch = 0;
	double dd = 0;
	while(scanf("%d",&inch) != EOF){
		dd = inch * 1.6;
		printf("%.1f\n",dd);
	}
	return 0;
} 
