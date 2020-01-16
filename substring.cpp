#include<stdio.h>
#include<string.h>

int main(){
	
	char target[100];
	char line[100];
	char *ptr = NULL;
	int time = 0;
	int len = 0;
	scanf("%s",target);
	scanf("%s",line);
	len = strlen(target);
	if(target[len - 1] == '\n') target[len - 1] = '\0';
	ptr = line;
	while(ptr != NULL){
		ptr = strstr(ptr,target);
		if(ptr != NULL){
			 time++;
		}
	}
	printf("%d\n",time);
	return 0;
} 
