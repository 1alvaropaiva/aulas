/*#include <stdio.h>

int main(){
	int num, ver, i;
	for (i=0; i<10; i++){
		scanf("%d", &num);
		if (num%2==0){
		ver += num;
		}
	}
	
	printf("%d", ver);
	
	return 0;
}*/
/*
#include <stdio.h>

int main(){
	float a, b, s;
	scanf("%f", &a);
	scanf("%f", &b);
	s = a/b;
	printf("%.2f", s);
		
	return 0;
}*/
/*
#include <stdio.h>

int main(){
	int b, l, c, x = 0, i;
	scanf("%d", &b);
	for (i=0; i<b; i++){
		scanf("%d %d", &l, &c);
			if (l>c){
				x += c;
			}
	}
	printf("%d", x);

	return 0;
}
*/
/*
#include <stdio.h>

int main(){
	int x, i;
	scanf("%d", &x);
	for (i=1; i<=x; i++){
		while (x%i==0){
			printf("%d ", i);
			break;
		}
	}
	
	return 0;
}*/
/*
#include <stdio.h>

int main(){
	int x, i;
	scanf("%d", &x);
	for (i=0; i<x; i++){
		printf("NepsAcademy eh Sucesso\n");
	}
	
	return 0;
}
*/
/*
#include <stdio.h>
#define PI 3.1416

int main(){
	float x, a;
	scanf("%f", &x);
	
	a = PI * (x*x);
	printf("%.2f", a);
	
	return 0;
}*/

#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("%.4lf\n", pow(x, y));
    return 0;
}










































