#include<stdio.h>

int main(){
	float a,b;
	while(scanf("%f",&a) != EOF){
		b = a*1.8 + 32;
		printf("%.1f\n",b);
	}
	return 0;
}
