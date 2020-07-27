#include"stdio.h"
void nhap(int a[][20], int n);
void init(int n);
void next_permutation(int n);
void chon_so(int k);
int a[20][20], b[20], n, k, stop, count;
main(){
	scanf("%d%d", &n, &k);
	nhap(a, n);
	chon_so(k);
}
void nhap(int a[][20], int n){
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
}
void init(int n){
	for(int i = 1; i <= n; i++)
		b[i] = i;
}
void next_permutation(int n){
	int i, j, r, s, temp; 
	i = n-1;
	while(i > 0 && b[i] > b[i+1]) i--;
	if(i > 0){
		j = n;
		while(b[i] > b[j]) j--;
		temp = b[i]; b[i] = b[j]; b[j] = temp;
		r = i+1; s = n;
		while(r < s){
			temp = b[r]; b[r] = b[s]; b[s] = temp;
			r++;
			s--;
		}
	}
	else stop = 0;
}
void chon_so(int k){
	int tong = 0;
	stop = 1; count = 0;
	init(n);
	while(stop != 0){
		tong= 0;
		for(int i = 1; i <= n; i++){
			tong = tong + a[i][b[i]];
		}
		if(tong == k) count++;
		next_permutation(n);
	}
	printf("%d\n", count);
	init(n);
	stop = 1;
	while(stop != 0){
		tong = 0;
		for(int i = 1; i <= n; i++){
			tong = tong + a[i][b[i]];
		}
		if(tong == k){
			for(int i = 1; i <= n; i++)
				printf("%d ", b[i]);
			printf("\n");
		}
		next_permutation(n);
		
	}
}
