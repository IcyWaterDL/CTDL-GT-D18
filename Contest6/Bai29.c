#include"stdio.h"
main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++){
		int flag = 0;
		for (int j=0; j < n-i-1; j++ ){
			if (a[j] > a[j+1] ){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = 1;
			}
		}
		if(flag == 1){
			printf("Buoc %d: ", i+1);
			for(int i = 0; i < n; i++)
				printf("%d ", a[i]);
			printf("\n");
		}
		else break;
	}
}

