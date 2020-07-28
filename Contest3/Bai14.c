#include"stdio.h"
#include"string.h"
#include"math.h"
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		char n[1000];
		scanf("%s", n);
		char s[1000];
		for(int i = 0; i < strlen(n); i++){
			s[i] = '0';
		}
		int stop = 0, flag = 0;
		while(stop == 0){
			int j = strlen(n);
			while(j>0 && s[j] == '1') j--;
			if(j = 0) stop = 1;
			else{
				s[j] = '1';
				for(int i = j+1; i < strlen(n); i++)
					s[i] = '0';
				long long x = 0;
				for(int i = 0; i < strlen(n); i++)
					if(s[i] == '1')
						x = 10*x + n[i]-'0'; 
				for(int i = 1; i < sqrt(x); i++){
					if(i*i*i == x){
						stop = 1; flag = 1;
						printf("%lld\n", x);
						break;
					}
				}
			}
		}
		if(flag == 0) printf("-1\n");
	}
}
