#include"stdio.h"
#include"math.h"
void next_binary(int n, int k);
void binary(int n);
void in(char b[], int n);
int test, n, k;
char b[100];
main(){
	scanf("%d", &test);
	while(test--){
		scanf("%d%d", &n, &k);
		for(int i = 1; i <= n; i++)
			b[i] = '0';
		binary(n);
	}
}
void in(char b[], int n){
	for(int i = 1; i <= n; i++)
		printf("%c", b[i]);
}
void next_binary(int n, int k){
	int i,j;
	i = n;
	while(b[i] == '1' && i > 0)
		i--;
	if(i > 0){
		b[i] = '1';
		for(j = i+1; j <= n; j++)
			b[j] = '0';
	}
}
void binary(int n){
	int m = pow(2,n);
	while(m--){
		next_binary(n,k);
		int dem = 0;
		for(int r = 1; r <= n; r++)
			if(b[r] == '1') dem++;
		if(dem == k){
			in(b, n);
			printf("\n");
		}
	}
}
