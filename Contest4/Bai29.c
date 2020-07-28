#include"stdio.h"
#include"stdlib.h"
#include"math.h"
typedef struct ppp{
	int x, y;
}point;
int cmpfuncX(const void* a, const void* b);
int cmpfuncY(const void* a, const void* b);
float distance(point p1, point p2);// tra ve khoang cach 
float dmin(point p[], int n);// tra ve khoang cach nho nhat
float min(float x, float y);// tra ve min(x,y)
float stripClosest(point strip[], int size, float d);
float closestUtil(point P[], int n);
float closest(point P[], int n);
main(){
	int test, n;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		point p[n];
		for(int i = 0; i < n; i++)
			scanf("%d%d", &p[i].x, &p[i].y);
		printf("%f", closest(p, n));
	}
}
int cmpfuncX(const void* a, const void* b){ 
    point *p1 = (point *)a,  *p2 = (point *)b; 
    return (p1->x - p2->x); 
} 
int cmpfuncY(const void* a, const void* b){ 
    point *p1 = (point *)a,  *p2 = (point *)b; 
    return (p1->y - p2->y); 
} 
float distance(point p1, point p2){ //tinh khoang cach 2 diem
    return sqrt( (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y)); 
} 
float dmin(point p[], int n){ // tra ve khoang cach nho nhat 
    float min = distance(p[1],p[2]); 
    for (int i = 0; i < n; i++) 
        for (int j = i+1; j < n; j++) 
            if (distance(p[i], p[j]) < min) 
                min = distance(p[i], p[j]); 
    return min; 
} 
float min(float x, float y){ //min(x,y) 
    return (x < y)? x : y; 
}
float stripClosest(point strip[], int size, float d){ 
    float min = d; 
  	qsort(strip, size, sizeof(point), cmpfuncY);//sap xep cac diem theo toa do y   
    for (int i = 0; i < size; i++) 
        for (int j = i+1; j < size && (strip[j].y - strip[i].y) < min; ++j) 
            if (distance(strip[i],strip[j]) < min) 
                min = distance(strip[i], strip[j]); 
  	return min; 
}
float closestUtil(point P[], int n){  
	if (n <= 3) return dmin(P, n);  
	int mid = n/2; 
	point midPoint = P[mid]; 
	float dl = closestUtil(P, mid); 
	float dr = closestUtil(P + mid, n-mid);  
	float d = min(dl, dr);  
	point strip[n]; 
	int j = 0; 
	for (int i = 0; i < n; i++) 
		if (abs(P[i].x - midPoint.x) < d) 
			strip[j] = P[i], j++; 
	return min(d, stripClosest(strip, j, d) ); 
}  
float closest(point P[], int n){ 
	qsort(P, n, sizeof(point), cmpfuncX); 
	return closestUtil(P, n); 
}   
