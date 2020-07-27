#include"stdio.h"
#include"string.h"
void gray_to_binary(char g[]);

main(){
	int test;
	char a[1000];
	scanf("%d", &test);
	while(test--){
		scanf("%s", a);
		gray_to_binary(a);
		printf("\n");
	}
}
void gray_to_binary(char g[]){
	char b[1000];
	b[0] = g[0];
	for(int i = 1; i < strlen(g); i++){
		if((g[i] == '1' && b[i-1] == '1') ||(g[i] == '0' && b[i-1] == '0')) b[i] = '0';
		else b[i] = '1';
	}
	for(int i = 0; i < strlen(g); i++)
		printf("%c", b[i]);
}
