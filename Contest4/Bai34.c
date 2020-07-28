#include"stdio.h"
typedef struct dathuc{
	int mu[100], hs[100];
}dt;
main(){
	int test, m, n;
	dt p, q, r[100]; 
	scanf("%d", &test);
	while(test--){
		scanf("%d%d", &m, &n);
		for(int i = 0; i < m; i++)
			scanf("%d", &p.hs[i]);
		for(int i = 0; i < n; i++)
			scanf("%d", &q.hs[i]);
		for(int i = 0; i < m; i++)// nhan da thuc
			for(int j = 0; j < n; j++){
				r[i].hs[j] = p.hs[i] * q.hs[j];
				r[i].mu[j] = i+j;
			}
		int mu = 0;
		while(mu < m+n-1){//rut gon
			int hs = 0;
			for(int i = 0; i < m; i++)
				for(int j = 0; j < n; j++){
					if(mu == r[i].mu[j]) hs += r[i].hs[j];
				}
			printf("%d ", hs);
			mu++;
		}
		printf("\n");
	}
}
