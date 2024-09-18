/*#include <stdio.h>

int main (){
	int num;
	for (num=0; num<=50; num++){
		printf("%d ", num);
	}
	
	return 0;
}*/

/*
#include <stdio.h>
#include <stdlib.h>

int main (){
	float num;
	
	for(num=0.0;num<=100.01; num=num+0.01){
		printf("%.2f ", num);
	}
	
	return 0;
}*/

/*
#include <stdio.h>

int main(){
	int n1, n2;
	
	printf("digite dois numeros: \n");
	scanf("%d %d", &n1, &n2);
	
	while (n2<=n1 - 1){
		printf("%d \n", n2);
		n2++;
    }
    
    while (n1<=n2 - 1){
    	printf("%d \n", n1);
		n1++;
	}
	
	return 0;
}*/

/*
#include <stdio.h>

int main(){
	int n1, n2, x;
	
	printf("Digite dois numeros: \n");
	scanf("%d %d", &n1, &n2);
	
	if (n2<n1){
		x = n1;
		n1 = n2;
		n2 = x;
	}
	
	while (n1<=n2){
		printf("%d\n", n1);
		n1++;
	}
	
	
	return 0;
}*/

/*
#include <stdio.h>

int main(){
	int fah, x;
	float cel;
	fah = 40;
	
	while (fah<=70){
		cel = 5.00 / 9.00 * (fah - 32.00);
		printf("%d\t %.2f\n", fah, cel);
		fah++;
	}
	
	
	return 0;
}*/

/*
#include <stdio.h>

int main(){
	int fah, x;
	float cel;
	
	for (fah=40;fah<=70;fah++){
		cel = 5.00 / 9.00 * (fah - 32.00);
		printf("%d\t %.2f\n", fah, cel);
	}
	
	
	return 0;
}*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	
	scanf("%d %d",&a, &b);
	if (a==0){
		printf("C");
	} else if (a==1 && b==1){
		printf("A");
	} else if (a==1 && b==0){
		printf("B");
	} 
	


    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	scanf("%d",&x);
	if (x < 0){
		printf("Negativo");
	} else if (x > 0){
		printf("Positivo");
	} else {
		printf("Nulo");
	}



    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int A, M;
	scanf("%d",&A);
	scanf("%d",&M);
    if (A+M <= 50){
        printf("S");
    } else {
        printf("N");
    }
    
    return 0;
}









































