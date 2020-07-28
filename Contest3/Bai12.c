#include"stdio.h"
#include"string.h"
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		char s[1000];
		scanf("%s", s);
		int dem[1000], k = 0;
		for(int i = 0; i < strlen(s)-1; i++){
			if(s[i] != '0'){
				dem[k] = 1;
				for(int j = i+1; j < strlen(s); j++){
					if(s[j] == s[i]){
						s[j] = '0';
						dem[k]++;
					}
				}
				++k;
				s[i] = '0';
			}
		}
		int max = 0;
		for(int i = 0; i < k; i++){
			if(max < dem[i]) max = dem[i];
		}
		if(strlen(s)%2 == 0){
			if(max <= strlen(s)-max) printf("1\n");
			else printf("-1\n");
		}
		else{
			if(max <= strlen(s)/2+1) printf("1\n");
			else printf("-1\n");
		}
	}
}
