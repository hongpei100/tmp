#include<stdio.h>

int main(){
	float a,b,c;
	float area;
	while(scanf("%f%f%f",&a,&b,&c) != EOF){
		area = (a+b)*c/2;
		printf("Trapezoid area:%.1f\n",area);
	}
} 
