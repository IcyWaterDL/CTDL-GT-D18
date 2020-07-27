#include"stdio.h"
void next_division();
void in(int arr[], int n);
void division();
int a[100], n, k, test, stop;//k la do dai xau hien tai
int main(){
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		k = 1;
		a[k] = n;
		division();
		printf("\n");
	}
}
void in(int a[], int n){
	printf("(");
	for(int i=1; i <= n; i++){
		if(i == n) printf("%d", a[i]);
		else printf("%d ", a[i]);
	}
	printf(")");
}
void next_division(){
	int i, j, D, R, S;
	i = k;
	while( i > 0 && a[i] == 1)
		i--;
	if(i > 0){
		a[i] = a[i] - 1;
		D = k-i+1;
		R = D/a[i];
		S = D%a[i];
		k = i;
		if(R > 0){
			for(j = i +1; j <= i+R; j++)
				a[j] = a[i];
			k = k + R;
		}
		if(S > 0){
			k = k+1;
			a[k] = S;
		}
	}
	else stop = 0;
}

void division(){
	stop = 1;
	while(stop != 0){
		in(a,k); 
		printf(" ");
		next_division();
	}
}
