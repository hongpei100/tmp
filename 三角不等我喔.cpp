#include<stdio.h>

int main(){
	int a,b,c;
	int x,y,z;
	scanf("%d%d%d",&a,&b,&c);
	x = a*a; y=b*b; z=c*c;
	if(a+b < c) printf("Not a Triangle");
	else{
		if(x+y > z) printf("Acute Triangle\n");
		if(x+y == z) printf("Right Triangle\n");
		if(x+y < z) printf("Obtuse Triangle\n");
	}
}
