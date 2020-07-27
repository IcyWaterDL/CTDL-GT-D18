#include"stdio.h"
#include"math.h"
int test, n, k;
char b[100];
void next_binary(int n);
void binary(int n, int k);
void in(char b[], int n);
int kt(char b[], int n, int k);
int count(int n,int k);
main(){
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; i++)
		b[i] = 'A';
	printf("%d\n", count(n,k));
	for(int i = 1; i <= n; i++)
		b[i] = 'A';	
	binary(n,k);

}
void next_binary(int n){
	int i, j;
	i = n;
	while(b[i] == 'B' && i > 0)
		i--;
	if(i > 0){
		b[i] = 'B';
		for(j = i+1; j <= n; j++)
			b[j] = 'A';
	}
}
int kt(char b[], int n, int k){
	int s = 0, dem = 0;
	for(int i = 1; i <= n;i++){
		if(b[i] == 'A'){ 
			dem++;
			if(dem >= k) s++;
		} 
		else dem = 0;
	}
	if(s == 1) return 1;
	return 0;
}
int count(int n,int k){
	int c=0;
	int t = pow(2,n);
	while(t--){
		if(kt(b, n, k)) c++;
		next_binary(n);
	}
	return c;
}
void binary(int n, int k){
	int i,j;
	int m = pow(2,n);
	while(m--){
		if(kt(b,n,k)){
			in(b,n);
			printf("\n");
		}
		next_binary(n);
	}	
}
void in(char b[], int n){
	for(int i = 1; i <= n; i++)
		printf("%c", b[i]);
}
