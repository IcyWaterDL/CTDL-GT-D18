#include"stdio.h"
#define max 100

int n, k, count, c[max], stop;

void result(int c[], int k){
	int i;
	for(i =1; i <= k; i++)
		printf("%d", c[i]);
}
void next_combination(int k){
	int i, j;
	i = k;
	while(i> 0 && c[i] == n-k+i)
		i--;
	if(i > 0){
		c[i] ++;
		for( j = i+1; j <=k; j++)
			c[j] = c[i] +j-i;
	}
	else stop = 0;
}
void combination(int c[], int k){
	stop = 1;
	while(stop != 0){
		result(c, k); printf(" ");
		next_combination(k);
	}
}
main(){
	int test,i;
	scanf("%d", &test);
	while(test--){
		scanf("%d%d", &n, &k);
		for(i = 1; i <= k; i++)
			c[i] = i;
		combination(c, k);
		printf("\n");
	}
}
