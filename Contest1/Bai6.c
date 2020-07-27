#include"stdio.h"
void in(int arr[], int n);
void sinh_hv(int n);
void sinh(int arr[], int n);
int stop;
int test, n, arr[100];
main(){
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		for(int i = 1; i <= n; i++)
			arr[i] = i;
		sinh(arr, n);
		printf("\n");
	}
}
void in(int arr[], int n){
	for(int i = 1; i <= n; i++)
		printf("%d", arr[i]);
}
void sinh_hv(int n){
	int i, j, r, s;
	i = n-1;
	while(i > 0 && arr[i] > arr[i+1])
		i--;
	if(i == 0) stop = 0;
	else{
		j = n;
		while(arr[i] > arr[j]) j--;
		int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
		r=i+1; s = n;
		while(r < s){
			int tg = arr[r]; arr[r] = arr[s]; arr[s] = tg;
			r++; s--;
		} 
	}
}
void sinh(int arr[], int n){
	stop = 1;
	while(stop != 0){
		in(arr, n);
		printf(" ");
		sinh_hv(n);
	}
}
