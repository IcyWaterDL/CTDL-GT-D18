#include"stdio.h"
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n,s,m;
		scanf("%d%d%d", &n, &s, &m);
		if(n*(s-s/7) < m*s) printf("-1\n");
		else{
			for(int i = 1; i <= s-s/7; i++)
				if(i*n >= m*s){
					printf("%d\n", i);
					break;
				}
		}
	}
}
