#include"stdio.h"
void nhap(int arr[], int n);
void in(int arr[], int n);
main(){
	int test, N, K, x[1000], i;
	scanf("%d", &test);
	while(test--){
		scanf("%d%d", &N, &K);
		nhap(x, K);
		i = K-1;
		if(x[i] < N) x[i]++;
		else{
			while(x[i] - x[i-1] == 1 && i>0){
				i--;
			}
			if(i>0){
				x[i-1]++;
				for(int j = i; j < K; j++)
					x[j] = x[i-1] + j - i + 1;
			}
			else{
				for(int j = 0; j < K; j++)
					x[j] = j+1;
			}
		}
		in(x, K);
		printf("\n");
	}
}
void nhap(int arr[], int n){
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
}
void in(int arr[], int n){
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}
