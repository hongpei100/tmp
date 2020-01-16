#include<stdio.h>
#include<string.h>

int main(){
	int cdt = 0;
	int a,i;
	int number;
	char www[100];
	while(scanf("%s",&www) != EOF){
		a = strlen(www);
		for(i = 0; i < a; i++){
			if(www[i] == www[a - i - 1]){
				cdt = 0;
			}
			else{
				cdt = 1; break;
			}
		}
		if(cdt == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
