#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TAM 2


int main (){
	int v[TAM][TAM];
	
	for (int i=0;i<TAM;i++){
		for (int j=0;j<TAM;j++){
			printf("digite o valor de [%d][%d]:\n", i+1, j+1);
			scanf("%d", &v[i][j]);
		}
	}	
	
	
	
	
	return 0;
}

/*
1. Elaborar um programa em C que leia um vetor com dez números
inteiros, calcule e mostre a quantidade de números negativos e de zeros
e a soma dos números positivos desse vetor.

2. Elaborar um programa em C que leia um vetor com 10 números inteiros
e multiplique todos os elementos pelo maior valor do vetor. Imprimir o
vetor antigo, o maior valor e o vetor novo.

3. Elaborar um programa em C que leia um vetor com 10 números reais e
obtenha o maior e o menor valor armazenado nele, bem como suas
posições.

4. Elaborar um programa em C que leia um conjunto de 10 notas
armazenadas em um vetor e imprima todas as notas maiores que a
média do conjunto.

5. Elaborar um programa em C para ler um vetor de 7 elementos,
contendo valores numéricos reais. Em seguida, verificar se existem
elementos iguais a 10 armazenados nele e mostrar as posições (linha)
onde estão esses elementos.
*/

/*
EXERCICIO 01
int main(){
	int v[TAM], negativo=0, zero=0, positivo=0;
	
	for (int i=0; i<TAM; i++){
		scanf("%d", &v[i]);
		if (v[i]==0){
			zero++;
		} else if (v[i]<0){
			negativo++;
		} else {
			positivo+=v[i];
		}
	}
	
	
	printf("negativos: %d\n", negativo);
	printf("zeros: %d\n", zero);
	printf("soma dos positivos: %d\n", positivo);
	
	return 0;
}

EXERCICIO 02

int main(){
	int v[TAM], maiornumero=-99999;
	
	printf("escreva os numeros do vetor: \n");
	for (int i=0; i<TAM; i++){
		scanf("%d", &v[i]);
		if (v[i]>maiornumero){
			maiornumero = v[i];
		}
	}
	
	printf("novo vetor: \n");
	for (int i=0; i<TAM; i++){
		v[i] = v[i]*maiornumero;
		printf("%d\n", v[i]);
	}
	
	printf("vetor antigo: \n");
	for (int i=0; i<TAM; i++){
		v[i] = v[i]/maiornumero;
		printf("%d\n", v[i]);
	}	
	
	printf("maior numero: %d\n", maiornumero);
	
	return 0;
}

EXERCICIO 03

int main(){
	int v[TAM], maiornumero = -999999, menornumero = 99999, posicaomaior, posicaomenor;
	
	for (int i=0; i<TAM; i++){
		scanf("%d", &v[i]);
		if (v[i]>maiornumero){
			maiornumero = v[i];
			posicaomaior = i+1;
		} 
		if (v[i]<menornumero){
			menornumero = v[i];
			posicaomenor = i+1;
		}
	}
	
	printf("maior numero: %d\nposicao no vetor: %d\n", maiornumero, posicaomaior);
	printf("menor numero: %d\nposicao no vetor: %d\n", menornumero, posicaomenor);
	
	return 0;
}

EXERCICIO 04 

int main(){
	int v[TAM], notas = 0, media;
	
	for (int i = 0; i<TAM; i++){
		scanf("%d", &v[i]);
		notas+=v[i];
	}
	
	media = notas/TAM;
	
	for (int i = 0; i<TAM; i++){
		if (v[i]>media){
			printf("%d maior que a media (media: %d)\n", v[i], media);
		} else {
			printf("%d menor que a media (media: %d)\n", v[i], media);
		}
	}	
	
	return 0;
}

EXERCICIO 05

int main(){
	int v[TAM];
	
	for (int i=0; i<TAM; i++){
		scanf("%d", &v[i]);
	}
	
	for (int i=0; i<TAM; i++){
		if (v[i]==10){
			printf("vetor = 10. posicao: %d\n", i+1);
		} 
	}
	
	
	

	
	return 0;
}
*/