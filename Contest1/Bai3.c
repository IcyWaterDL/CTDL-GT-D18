#include"stdio.h"
void nhap(int arr[], int n);
void in(int arr[], int n);
void hv(int *a, int *b);
void next_permutation(int arr[], int n);
main(){
	int test, n, x[1000];
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		nhap(x, n);
		next_permutation(x, n);
		in(x, n);
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
void hv(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void next_permutation(int arr[], int n){
	int j, k, r, s;
	j = n-2;
	while(j > 0 && arr[j] > arr[j+1]){
		j--;
	}

	if( j == 0){
		for(int index = 0; index < n; index++)
			arr[index] = index +1;
	}
	else{
		k = n-1;
		while(arr[j] > arr[k]) k--;
		hv(&arr[j], &arr[k]);
		r = j+1; s = n-1;
		while(r < s){
				hv(&arr[r], &arr[s]);
				r++;
				s--;
		}
	}
}
