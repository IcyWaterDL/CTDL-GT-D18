#include"stdio.h"
#include"string.h"
int chuyen(char c){
    return (int)c-48;
}
main(){
	int test;
	char s1[35], s2[35];
	scanf("%d", &test);
	while(test--){
		scanf("%s%s", s1, s2);
		long long a1=0, a2=0;
		int pow1 = 1, pow2 = 1;
		for(int i = strlen(s1)-1; i >= 0; i--){
			a1 += chuyen(s1[i])*pow1;
			pow1 = pow1*2;
		}
		for(int i = strlen(s2)-1; i >= 0; i--){
			a2 += chuyen(s2[i])*pow2;
			pow2 = pow2*2;
		}
		printf("%lld\n", a1*a2);
	}
}
