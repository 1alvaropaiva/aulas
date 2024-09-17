/* 
#include <stdio.h>
#include <locale.h>

int main (){
	int i, j, k, l;
	
	i=1; // variaveis ja iniciadas
	j=1;
	
	//while
	while (i <= 10){
		printf("%d ", i); 
		i++;
	}
	
	//do while
	do{
		printf("%d ", j); 
		j++;
	} while (j <= 10);
	
	// for
	for (k=1; k<=10; k++){
		printf("%d ", k);
	}

	return 0;
}*/


//exercicios laços de repeticao https://medium.com/reflex%C3%A3o-computacional/7-exerc%C3%ADcios-while-b4d7d5354b97
// 1
/*
#include <stdio.h>

int main(){
	int num;
	num = 0;
	
	while (num <=100){
		printf("%d ", num);
		num++;
	}
	
	return 0;
}*/

//2
/*
#include <stdio.h>

int main(){
	int num;
	
	printf("Digite um numero maior ou igual a zero: \n");
	scanf("%d", &num);
	
	while (num < 0){
		printf("Nao digite numeros negativos. Tente novamente: \n");
		scanf("%d", &num);
	}
	
	while (num <= 100){
		printf("%d ", num);
		num++;
	}
	
	
	return 0;
}*/

//3

//4
/*
#include <stdio.h>

int main (){
	float num1, num2;
	int operacao;
	
	printf("Digite dois numeros: \n");
	scanf("%f %f", &num1, &num2);
		
	printf("Digite a operacao: \n1-soma\n2-subtracao\n3-multiplicacao\n4-divisao\n");
	scanf("%d", &operacao);
		while (operacao <= 0 || operacao > 4){
			printf("Digite um numero de 1 a 4:\n");
			scanf("%d", &operacao);
		}
		
	switch (operacao){
		case 1: printf("Resultado da soma: %2.f", num1 + num2);
		break;
		case 2: printf("Resultado da subtracao: %2.f", num1 - num2);
		break;
		case 3: printf("Resultado da multiplicacao: %2.f", num1 * num2);
		break;
		case 4: printf("Resultado da divisao: %2.f", num1 / num2);
	}
		
		
	return 0;
}*/

//5

#include <stdio.h>

int main (){
	
	
	
	return 0;
}



































