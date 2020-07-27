#include"stdio.h"
#include"math.h"
void Try(int t, int sum);
int check(int x);
struct arr{
	int mang[10];
}stt[100];
int a[10], b[50], n, p, s, sum, k = 0, dem, t, pt;
main(){
	int test;
	scanf("%d", &test);
	for(int j = 2; j < 200; j++)
		if(check(j)){
			k++;
			b[k] = check(j);
		}
	while(test--){
		dem = 0;pt = 0;
		scanf("%d%d%d", &n, &p, &s);
		for(int j = 1; j <= p; j++)
			if(b[j] == p) t = j;
		Try(t, 0);
		printf("%d\n", dem);
		for(int j = 1; j <= dem; j++){
			for(int k = 1; k <= n; k++)
				printf("%d ", stt[j].mang[k]);
			printf("\n");	
		}
	}
}
int check(int x){
	if(x < 2) return 0;
	for(int j = 2; j <= sqrt(x); j++)
		if(x % j == 0) return 0;
	return x;
}
void Try(int t, int sum){
	if(sum > s) return;
	if(sum == s && pt == n){
		dem++;
		for(int j = 1; j <= n; j++)
			stt[dem].mang[j] = a[j];
	}
	for(int j = t; j <= k; j++)
		if(sum + b[j] <= s){
			pt++;
			a[pt] = b[j];
			Try(j+1, sum + b[j]);
			pt--;
		}
}
