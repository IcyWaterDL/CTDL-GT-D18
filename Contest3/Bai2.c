#include"stdio.h"
#include"string.h"
#include"stdlib.h"
int amin(int x);
int bmin(int x);
int amax(int x);
int bmax(int x);
char ami[10], bmi[10], ama[10], bma[10];
int a, b, min, max;
main(){
	scanf("%d%d", &a, &b);
	int x=a, y=b, t=a, k=b;
	min = amin(x)+bmin(y);
	printf("%d ", min);
	max = amax(t)+bmax(k);
	printf("%d", max);
}
int amin(int x){
	itoa(x, ami, 10);
	for(int i = 0; i < strlen(ami); i++)
		if(ami[i]  == '6') ami[i] = '5';
	int amin = atoi(ami);
	return amin;
}
int bmin(int x){
	itoa(x, bmi, 10);
	for(int i = 0; i < strlen(bmi); i++)
		if(bmi[i]  == '6') bmi[i] = '5';
	int bmin = atoi(bmi);
	return bmin;
} 
int amax(int x){
	itoa(x, ama, 10);
	for(int i = 0; i < strlen(ama); i++)
		if(ama[i]  == '5') ama[i] = '6';
	int amin = atoi(ama);
	return amin;
}
int bmax(int x){
	itoa(x, bma, 10);
	for(int i = 0; i < strlen(bma); i++)
		if(bma[i]  == '5') bma[i] = '6';
	int bmax = atoi(bma);
	return bmax;
}

