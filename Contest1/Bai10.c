#include"stdio.h"
#include"string.h"
void sinh_gray(char str[]);

main(){
	int test, n;
	char a[1000];
	scanf("%d", &test);
	while(test--){
		scanf("%s", a);
		sinh_gray(a);
		printf("\n");
	}
}
void sinh_gray(char str[]){
	char s[1000];
	s[0] = str[0];
	for(int i = 1; i < strlen(str); i++){
		if((str[i] == '1' && str[i-1] == '1') ||(str[i] == '0' && str[i-1] == '0')) s[i] = '0';
		else s[i] = '1';
	}
	for(int i = 0; i < strlen(str); i++)
		printf("%c", s[i]);
}
