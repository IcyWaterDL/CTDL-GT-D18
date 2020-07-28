#include"stdio.h"
void merge(int a[], int l, int m, int r){
	int n1 = m - l +1, n2 = r-m;
	int L[n1], R[n2]; 
    for (int i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for (int j = 0; j < n2; j++) 
        R[j] = a[m + 1+ j];
    int i = 0, j = 0, k = l;
    while( i < n1 && j < n2){
    	if(L[i] <= R[j]){
    		a[k] = L[i];
    		i++;
		}
		else{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while(i < n1){
		a[k] = L[i];
		i++; k++;
	}
	while(j < n2){
		a[k] = R[j];
		j++; k++;
	}
}
void mergeSort(int a[], int l, int r){ 
    if (l < r) { 
        int m = l+(r-l)/2;  
        mergeSort(a, l, m); 
        mergeSort(a, m+1, r); 
  		merge(a, l, m, r); 
    } 
} 
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		mergeSort(a, 0, n-1);
		int dem = 0;
		for(int i = 0; i < n-1; i++){
			if(a[i+1]-a[i]>1){
				dem += a[i+1]-a[i]-1;	
			}
		}
		printf("%d\n", dem);
	}
}
