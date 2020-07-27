#include"stdio.h"
#include"math.h"
void init(int b[], int n);
void next_bit_string(int b[], int n);
void BSNN(int b[], int N);
int test;
main(){
	int N, b[16];
	scanf("%d", &test);
	while(test--){
		scanf("%d", &N);
		BSNN(b, N);
		printf("\n");
	}
}
void next_bit_string(int b[], int n){
	int i = n;
	int ok;
	while(b[i] == 9 && i > 0){
			b[i] = 0;
			i--;
		}
	if(i > 0) b[i] = 9;
}
void init(int b[], int n){
	for(int i = 1; i <= n; i++)
		if(i == n) b[i] = 9;
		else b[i] = 0;
}
void BSNN(int b[], int N){
	int j, stop;
	long long boi_so;
	int so_bit = 16;
	init(b, so_bit);
	stop = 1;
	while(stop!=0){
		boi_so = 0;
		for(int i = 1; i <= so_bit; i++)
			boi_so += b[i]*pow(10,so_bit-i);
		if(boi_so % N == 0){
			j = 1;
			while(b[j] == 0) j++;
			for(int i = j; i <= so_bit; i++)
			printf("%d", b[i]);
			stop = 0;
		}
		next_bit_string(b, so_bit);
	}
}
