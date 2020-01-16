#include<stdio.h>

int main(){
	int total;
	float time;
	float a,b,c,d;
	scanf("%f %f",&a,&b);
	scanf("%f %f",&c,&d);
	if(d > b){
		if(d - b >= 30) time = 0.5;
		else time = 0;
	}
	else if(d < b && a != c){
		time--;
		if(60 - b + d >= 30) time += 0.5;
		else time += 0;	
	}
	else if (d == b){
		time = 0;
	}
	
	time = time + (c-a);
		if(time >= 4){
			total = total + ((time - 4) * 2 * 60);
			total = total + (2 * 2 * 40) + (2 *2 *30);
		}
		else if(2 <= time && time < 4 ){
			total = total + ((time - 2) * 2 * 40);
			total = total + (2 * 2 * 30);
		}
		else if(time < 2){ 
			total = total + time * 2 * 30;
		}
	printf("%d\n",total);
	return 0;
}
