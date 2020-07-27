#include"stdio.h"
#include"string.h"
#include"stdlib.h"
void Try(int k);
char s[10];
int index, Max;
main(){
	int test, k;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &k);
		scanf("%s", s);
		Max = atoi(s);
		Try(k);
		printf("%d", Max);
		printf("\n");
	}
}
void Try(int k){
	if(k == 0) return;
	for(int i = 0; i < strlen(s); i++)
		for(int j = i+1; j < strlen(s); j++)
			if(s[i] < s[j]){
				char temp;
				temp = s[i]; s[i] = s[j]; s[j] = temp;
				if(Max < atoi(s)) Max = atoi(s);
				Try(k-1);
				temp = s[i]; s[i] = s[j]; s[j] = temp;
			}
}
