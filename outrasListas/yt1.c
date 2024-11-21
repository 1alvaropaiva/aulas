// elaborar um algoritmo p ler 10 numeros inteiros e imprimir se cada numero é par ou impar 

/*
#include <stdlib.h>
#include <stdio.h>

int main(){
	printf("Digite um numero positivo maior que zero: \n");
	
	int num, i;
	scanf("%d", &num);
	for (i=1; i<=num; i++){
			if (i%2 == 0){
				printf("%d e par\n", i);
			} else {
				printf("%d e impar\n", i);
			}
	}
	return 0;
}
*/


/*
#include <stdio.h>
int main(){
	int num;
	printf("Digite um numero positivo maior que zero: \n");
	scanf("%d", &num);
	if (num%2==0){
		printf("%d e par.", num);	
	} else {
		printf("%d e impar", num);
	}
	
	return 0;
}
*/

/*
#include <stdio.h>

int main(){
	int num, i;
	
	for (i=1; i<=10; i++){
		
		printf("entre com o %d numero: \n", i);
		scanf("%d", &num);
		
		if (num%2!=0){
		printf("%d eh impar\n", num);
		} else {
		printf("%d eh par\n", num);
		}
	}
	
	return 0;
}*/

/*
#include <stdio.h>
int main(){
	int num, i, impar, par;
	
	impar = 0;
	par = 0;
	
	for (i=1; i<=10; i++){
	
	printf("entre com o %d numero: \n", i);
	scanf("%d", &num);
		
	if (num%2!=0){
	printf("%d eh impar\n", num);
	impar++;
	} else {
	printf("%d eh par\n", num);
	par++;
	}
	
	}
	
	
	printf("%d numeros pares e %d numeros impares.", par, impar);
	return 0;
}*/

/*

#include <stdio.h>

int main(){
	int num, i, impar, par;
	float mediaimpar, mediapar, p1, i1;
	
	i1 = 0;
	p1 = 0;
	impar = 0;
	par = 0;
	
	for (i=1; i<=4; i++){
	
	printf("entre com o %d numero: \n", i);
	scanf("%d", &num);
		
	if (num%2!=0){
	i1 = i1 + num;
	printf("%d eh impar\n", num);
	impar++;
	} else {
	p1 = p1 + num;
	printf("%d eh par\n", num);
	par++;
	}
	}
	
	mediapar = (float)p1/par;
	mediaimpar = (float)i1/impar;
	
	
	printf("%d numeros pares e %d numeros impares.\n", par, impar);
	printf("media dos pares: %.2f\nmedia dos impares: %.2f", mediapar, mediaimpar);
	return 0;
}
/*
#include <stdio.h>

int main(){
	float p1, p2, c1, c2;
	
	
	scanf
	
	
	return 0;
}




*/
/*
#include <stdio.h>
int main() {
int num = 5, primeiro = 0, segundo = 1;
int proximo, c, d = 0;
for (c = 0; c < num; c++){
if (c <= 1)
proximo = c;
else{
proximo = primeiro + segundo;
primeiro = segundo;
segundo = proximo;
}
d += proximo;
}
printf("%d\n", d);
return 0;
}
*/
















































