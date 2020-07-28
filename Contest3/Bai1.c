#include"stdio.h"
int t[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, dem = 0;
		scanf("%d", &n);
		for(int i = 9; i >= 0; i--){
			dem += n/t[i];
			n %= t[i];
		}
		printf("%d\n", dem);
	}
}
