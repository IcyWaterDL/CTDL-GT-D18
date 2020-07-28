#include"stdio.h"
#include"string.h"
char inttochar(int n);
int chartoint(char c);
int dq(int k, char s[]);
void digit(int num, int k, char s[]);
main(){
	int k; 
	char sa[100], sb[100], s[1000];
	scanf("%d%s%s", &k, sa, sb);
	digit(dq(k, sa)+dq(k, sb), k, s);
}
int dq(int k, char s[]){
	int pow = 1, num = 0;
	for(int i = strlen(s)-1; i >= 0; i--){
		if(chartoint(s[i]) >= k) return -1;
		num += chartoint(s[i])*pow;
		pow = pow*k; 
	}
	return num;
}
int chartoint(char c){
	return (int)c-'0';    	    
}
char inttochar(int n){
	return (char)n+'0';    
}
void digit(int num, int k, char s[]){
	int i = 0;
	while(num > 0){
		s[i] = inttochar(num%k);
		num /= k;
		i++;
	}
	for(int j = i-1; j >= 0; j--)
		printf("%c", s[j]);
}
