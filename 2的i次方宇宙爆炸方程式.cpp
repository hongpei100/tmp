#include<stdio.h>
#include<math.h>

int main(){
	
	int a,i;
	scanf("%d",&a);
	if(a > 31) printf("Value of more than 31\n");
	else if(0 < a && a < 31){
		i = pow(2,a);
		printf("%d\n",i);
	}
}
