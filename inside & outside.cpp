#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main(){
	
	int x,y,tmp;
	while(scanf("%d%d",&x,&y) != EOF){
		tmp = (x*x) + (y*y);
		tmp = pow(tmp,0.5);
		if(tmp <= 100){
			printf("inside\n");
		}
		else printf("outside\n");
	}
	return 0;
}
