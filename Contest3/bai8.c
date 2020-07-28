#include"stdio.h"
#include"stdlib.h"
typedef struct congviec{
	int f, s;
}congviec;
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		congviec cv[1000];
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
			scanf("%d", &cv[i].s);
		for(int i = 0; i < n; i++)
			scanf("%d", &cv[i].f);
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(cv[i].f > cv[j].f){
					int tmp1, tmp2;
					tmp1 = cv[i].f; tmp2 = cv[i].s;
                	cv[i].f = cv[j].f; cv[i].s = cv[j].s;
                	cv[j].f = tmp1; cv[j].s = tmp2;
				}
			}
		}
		int dem = 1, i = 0;
		for(int j = 1; j < n; j++){
			if(cv[i].f <= cv[j].s){
				dem++;
				i = j;
			}
		}
		printf("%d\n", dem);
	}
}
