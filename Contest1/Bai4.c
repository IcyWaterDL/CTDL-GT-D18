#include"stdio.h"
#include"math.h"
void sinh_xau_ab(char str[], int n);
void in(char str[], int n);
main(){
	int test, n, k;
	char ab[100];
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		k = pow(2,n)-1;
		for(int i = 0; i < n; i++)
			ab[i] = 'A';
		in(ab, n);
		printf(" ");
		while(k--){
			sinh_xau_ab(ab, n);
			in(ab, n);
			printf(" ");
		}
		printf("\n");
	}
}
void sinh_xau_ab(char str[], int n){
	int i = n - 1;
	while(str[i] == 'B' && i > 0)
		i--;
	str[i] = 'B';
	for(int j = i+1; j < n; j++)
		str[j] = 'A';
}
void in(char str[], int n){
	for(int i = 0; i < n; i++)
		printf("%c", str[i]);
}
