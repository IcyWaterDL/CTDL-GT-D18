#include"stdio.h"
void Try(int i);
int a[15], k, n, s, sum, dem;
main(){
	while(1){
		scanf("%d%d%d", &n, &k, &s);
		dem = 0;
		a[0] = 0;
		if(n == 0 && k == 0 && s == 0) break;
		Try(1);
		printf("%d\n", dem);
	}
}
void Try(int i){
	for(int j = a[i-1]+1; j <= n-k+i; j++){
		a[i] = j;
		if(i == k){
			sum = 0;
			for(int j = 1; j <= k; j++)
				sum += a[j];
			if(sum == s) dem++;
		} 
		else Try(i+1); 
	}
}
