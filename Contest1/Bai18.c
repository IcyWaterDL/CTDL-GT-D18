#include"stdio.h"
void next_combination(int k);
int n, s, stop, t[50], c[50];
main(){
	scanf("%d%d", &n, &s);
	for(int j = 1; j <= n; j++)
		scanf("%d", &t[j]);
	for(int i = 1; i <= n; i++){
		stop = 1;
		for(int j = 1; j <= i; j++)
			c[i] = j;
		while(stop != 0){
			int sum = 0;
			for(int j = 1; j <= i; j++)
				sum += t[c[j]];
			if(sum == s){
				printf("%d", i);
				return 0;
			}
			next_combination(i);
		}
	}
}
void next_combination(int k){
	int j = k;
    while(c[j] == n-k+j && j > 0) j--;
    if(j == 0) stop = 0;
    else{
    	c[j]++;
    	for(int i = j+1; i <= k; i++)
			c[i] = c[i-1]+1;
	}
}
