#include<stdio.h>

int main(){
	
	float time,b = 0;
	float sum = 0;
	scanf("%f%f",&time,&b);
	if(time >= 121){
		sum += (time -120) * b * 1.66;
		sum += 60 * b * 1.33;
		sum += 60 * b;
	}
	else if(61 <= time && time <= 120){
		sum += (time-60) * b * 1.33;
		sum += 60 * b;
	}
	else if(time <= 60){
		sum += time * b;
	}
	printf("%.1f\n",sum);
} 
