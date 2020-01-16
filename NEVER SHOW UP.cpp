#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	
	int c,i,j;
	int time[100];
	char line[1000];
	char mm[100];
	char k;
	int space = 0;
	scanf("%s",line);
	for(j = 0; j < 200; j++) time[j] = 0;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\n'){
			space++; continue;
		}
		else if(isspace(c)){
			continue;
		}
		c = tolower(c);
		k = c;
		mm[c] = k;
		time[c]++;
	}
	printf("%d\n",space);
	j = 0;
	while(j < 200){
		if(time[j] != 0){
			printf("%c : %d\n",mm[j],time[j]);
		}
		j++;
	}
	return 0;
}
