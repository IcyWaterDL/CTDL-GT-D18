#include"stdio.h"
#include"string.h"
 main(){
	int test;
	char s[1000];
	scanf("%d", &test);
	while(test--){
		scanf("%s", s);
		int i=strlen(s)-1;
		while(s[i] =='1' && i>=0){
			s[i] = '0';
			i--;
		}
		if(i>=0) s[i] = '1';
		printf("%s\n", s);
	}
}
