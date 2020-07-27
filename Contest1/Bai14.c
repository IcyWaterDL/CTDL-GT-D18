#include"stdio.h"
int a[1000], n, k;
void nhap(int a[], int n);
void next_combination(int a[], int n, int k);
int kt(int a[], int k);
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		scanf("%d%d", &n, &k);
		nhap(a,k);
		printf("%d\n", kt(a, k));
	}
}
void nhap(int a[], int n){
	for(int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
}
void in(int a[], int n){
	for(int i = 0; i <= n; i++)
		printf("%d", a[i]);
}     
void next_combination(int a[], int n, int k){
	int i = k;
	while(i > 0 && a[i] == n- k + i) i--;
	if(i > 0){
		a[i] = a[i] + 1;
		for(int j = i+1; j <= k; j++)
			a[j] = a[i] + j -i;
	}
}
int kt(int a[], int k){
	int dem, nghi = 0, b[100];
	for(int i = 1; i <= k; i++)
		b[i] = a[i];
	next_combination(b, n, k);
	for(int i = 1; i <= k; i++){
		dem = 0;
		for(int j = 1; j <= k; j++){
			if(b[j] == a[i]){
				dem++;
				break;
			}
		}
		if(dem) nghi++;
	}
	if(nghi == k) return nghi;
	return k - nghi;
}
