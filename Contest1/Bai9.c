#include"stdio.h"
#include"math.h"
void sinh_gray(int a[], int n);
void sinh_nhi_phan(int arr[], int n);
void in(int arr[], int n);
main(){
	int test, n, k;
	int ab[10000];
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		k = pow(2,n)-1;
		for(int i = 1; i <= n; i++)
			ab[i] = 0;
		in(ab, n);
		printf(" ");
		while(k--){
			sinh_gray(ab, n);
			//in(ab, n);
			printf(" ");
		}
		printf("\n");
	}
}
void sinh_nhi_phan(int arr[], int n){
	int i = n;
	while(arr[i] == 1 && i > 0)
		i--;
	arr[i] = 1;
	for(int j = i+1; j <= n; j++)
		arr[j] = 0;
}
void sinh_gray(int arr[], int n){
	sinh_nhi_phan(arr, n);
	int a[10000];
	a[1] = arr[1];
	for(int i = 2; i <= n; i++){
		if(arr[i] == 1 && arr[i-1] == 1) a[i] = 0;
		else if((arr[i] == 1 && arr[i-1] == 0) || (arr[i] == 0 && arr[i-1] == 1)) a[i] = 1;
	}
	in(a,n);
}
void in(int arr[], int n){
	for(int i = 1; i <= n; i++)
		printf("%d", arr[i]);
}
