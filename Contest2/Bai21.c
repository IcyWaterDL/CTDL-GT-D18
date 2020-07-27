#include"stdio.h"
#include"string.h"
#define true 1
#define false 0
void init();
void Try(int i);
int chuaxet[12], vi_tri[12];
char p[12];
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		scanf("%s", p);
		init();
		Try(1);
		printf("\n");
	}
}
void init(){
	for(int j = 0; j <= strlen(p); j++)
		chuaxet[j] = true;
}
void Try(int i){
	for(int j = 0; j < strlen(p); j++){
		if(chuaxet[j]){
			vi_tri[i] = j;
			chuaxet[j] = false;
			if(i == strlen(p)){
				for(int t = 1; t <= strlen(p); t++)
					printf("%c", p[vi_tri[t]]);
				printf(" ");
			} 
			else Try(i+1);
			chuaxet[j] = true;
		}
	}
}
