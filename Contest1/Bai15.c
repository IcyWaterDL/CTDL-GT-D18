#include"stdio.h"
#include"string.h"
char a[85];
int test, thu_tu, stop;
void next_permutation(char a[]);
main(){
	scanf("%d", &test);
	while(test--){
		scanf("%d", &thu_tu);
		//fflush(stdin);
		gets(a);
		next_permutation(a);
		if(stop){
			printf("%d", thu_tu);
			puts(a);
		}
		else{
			printf("%d BIGGEST\n", thu_tu);
		}
	}
}
void next_permutation(char a[]){
	int j, k, r, s, temp, tg;
	j = strlen(a)-2;
	stop = 1;
	while(j > 0 && a[j] >= a[j+1]) j--;
	if(j == 0) stop = 0;
	else{
		k = strlen(a)-1;
		while(a[j] >= a[k]) k--;
		temp = a[j]; a[j] = a[k]; a[k]= temp;
		r = j+1; s = strlen(a)-1;
		while(r < s){
			tg = a[r]; a[r] = a[s]; a[s] = tg;
			r++; s--;
		}
	}
}
