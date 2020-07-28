#include"stdio.h"
#include"string.h"
main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int d;
		scanf("%d", &d);
		char s[10001];
		scanf("%s", s);
		int dem[300]={0}, max = 0;
		for(int i = 0; i < strlen(s); i++){
			dem[s[i]]++;
			if(max < dem[s[i]]) max = dem[s[i]];
		}
		if((max-1)*(d-1) > strlen(s)-max) printf("-1\n");
		else printf("1\n");	
	}
}
