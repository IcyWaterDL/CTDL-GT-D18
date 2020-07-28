#include"stdio.h"
#include"math.h"
typedef struct aaa{
	int a, b;
}abc;
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n, x;
		scanf("%d%d", &n, &x);
		abc A[10000];
		for(int i = 0; i < n; i++){
			scanf("%d", &A[i].a);
			A[i].b = abs(A[i].a-x);
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n-i-1; j++){
				if(A[j].b > A[j+1].b){
					int temp1 = A[j].b, temp2 = A[j].a;
					A[j].b = A[j+1].b; A[j].a = A[j+1].a;
					A[j+1].b = temp1; A[j+1].a = temp2;
				}
			}
		}
		for(int i = 0; i < n; i++)
			printf("%d ", A[i].a);
		printf("\n");	
	}
}
