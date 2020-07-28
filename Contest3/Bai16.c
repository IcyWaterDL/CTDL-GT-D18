#include"stdio.h"
int isFull(int top, int d){
	if(top == d-1) return 1;
	return 0; 
}
int isEmpty(int top){
	if(top == -1) return 1;
	return 0;
}
void pop(int top){
	if(isEmpty(top) == 0) top -= 1;
}
void push(int top, int d, int stack[100], int data){
	if(isFull(top, d) == 0){
		top += 1;
		stack[top] = data;
	}
}
int Top(int top, int stack[100]){
	return stack[top];
}
main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int s, d;
		scanf("%d%d", &s, &d);
		int stack[d], top = -1;
		int size = d;
		while(s > 0){
			d--;
			if(s > 9){
				push(top, size, stack, 9);
				s -= 9;
			}
			else{
				push(top, size, stack, s);
				break;
			}
		}
		if( d < 0) printf("-1\n");
		else{
			if(d > 0){
				int so = Top(top,stack), x = d;
				pop(top);
				push(top, d, stack, so-1);
				while(x > 1){
					push(top, d, stack, 0);
					x--;
				}
				push(top, d, stack, 1);
			}
			while(top >= 0){
				printf("%d", Top(top, stack));
				pop(top);
			}
			printf("\n");
		}
	}
}
