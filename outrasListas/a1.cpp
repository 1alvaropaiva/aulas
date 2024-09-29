/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,n5,media;
    
        printf("digite a 1 nota: \n");
        scanf("%f",&n1);
        printf("digite a 2 nota: \n");
        scanf("%f",&n2);
        printf("digite a 3 nota: \n");
        scanf("%f",&n3);
        printf("digite a 4 nota: \n");
        scanf("%f",&n4);
        printf("digite a 5 nota: \n");
        scanf("%f",&n5);
        
        while (n1>10||n1<0||n2>10||n2<0||n3>10||n3<0||n4>10||n4<0||n5>10||n5<0){
        	printf("digite a nota certa:\n");
        	scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);
		}
        
        media = (n1+n2+n3+n4+n5)/5;
        printf("Media:  %.2f",media);

    return 0;
}*/
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	int A, B, C, R, S, D;
	scanf("%d%d%d", &A, &B, &C);
	
	R = (A + B)*(A+B);
	S = (B + C)*(B+C);
	D = (R + S)/2;
	
	printf("%d", D);
	
	return 0;
}*/
/*
#include <stdio.h>
#define UVA 6.50
#define MORANGO 7.80
#define LIMAO 10.00
#define MARACUJA 13.00
#define ABACAXI 14.50


int main (){
	int sabor_suco, quantidade;
	float totalpagar;
	printf("CASA DE SUCOS\n\n");
	printf("\tCardapio\n\n");
	printf("1-UVA:\t\t%.2f\n", UVA);
	printf("2-MORANGO:\t%.2f\n", MORANGO);
	printf("3-LIMAO:\t%.2f\n", LIMAO);
	printf("4-MARACUJA:\t%.2f\n", MARACUJA);
	printf("5-ABACAXI:\t%.2f\n\n", ABACAXI);
	
	printf("Escolha o sabor do suco: \n\n");
	scanf("%d", &sabor_suco);
	if (sabor_suco == 1){
		printf("Quantos sucos deseja?\n");
		scanf("%d", &quantidade);
		totalpagar = quantidade * UVA;
		printf("Sua conta deu: %.2f\n", totalpagar);
	} else if (sabor_suco == 2){
		printf("Quantos sucos deseja?\n");
		scanf("%d", &quantidade);
		totalpagar = quantidade * MORANGO;
		printf("Sua conta deu: %.2f\n", totalpagar);
	} else if (sabor_suco == 3){
		printf("Quantos sucos deseja?\n");
		scanf("%d", &quantidade);
		totalpagar = quantidade * LIMAO;
		printf("Sua conta deu: %.2f\n", totalpagar);
	} else if (sabor_suco == 4){
		printf("Quantos sucos deseja?\n");
		scanf("%d", &quantidade);
		totalpagar = quantidade * MARACUJA;
		printf("Sua conta deu: %.2f\n", totalpagar);
	} else if (sabor_suco == 5){
		printf("Quantos sucos deseja?\n");
		scanf("%d", &quantidade);
		totalpagar = quantidade * ABACAXI;
		printf("Sua conta deu: %.2f\n", totalpagar);
	} else {
		printf("Digite um valor de 1 a 5. ");
	}
	
	int x;
	printf("deseja mais algum suco? digite 1 para sim ou 2 para nao:\n");
	scanf("%d", &x);
	
	while (x>2||x<1){
		printf("digite novamente: \n");
		scanf("%d", &x);
	}
	
	switch (x){
		case 1:{
			printf("1-UVA:\t\t%.2f\n", UVA);
			printf("2-MORANGO:\t%.2f\n", MORANGO);
			printf("3-LIMAO:\t%.2f\n", LIMAO);
			printf("4-MARACUJA:\t%.2f\n", MARACUJA);
			printf("5-ABACAXI:\t%.2f\n\n", ABACAXI);printf("Escolha o sabor do suco: \n\n");
			scanf("%d", &sabor_suco);
			if (sabor_suco == 1){
				printf("Quantos sucos deseja?\n");
				scanf("%d", &quantidade);
				totalpagar = quantidade * UVA;
				printf("Sua conta deu: %.2f\n", totalpagar);
			} else if (sabor_suco == 2){
				printf("Quantos sucos deseja?\n");
				scanf("%d", &quantidade);
				totalpagar = quantidade * MORANGO;
				printf("Sua conta deu: %.2f\n", totalpagar);
			} else if (sabor_suco == 3){
				printf("Quantos sucos deseja?\n");
				scanf("%d", &quantidade);
				totalpagar = quantidade * LIMAO;
				printf("Sua conta deu: %.2f\n", totalpagar);
			} else if (sabor_suco == 4){
				printf("Quantos sucos deseja?\n");
				scanf("%d", &quantidade);
				totalpagar = quantidade * MARACUJA;
				printf("Sua conta deu: %.2f\n", totalpagar);
			} else if (sabor_suco == 5){
				printf("Quantos sucos deseja?\n");
				scanf("%d", &quantidade);
				totalpagar = quantidade * ABACAXI;
				printf("Sua conta deu: %.2f\n", totalpagar);
			} else {
				printf("Digite um valor de 1 a 5. ");
			}
			break;
		}
		case 2:{
			printf("obg pela compra!\n");
			break;
		}
	
		
	}
	
	
	
	return 0;	
}
*/




//1)
/*
#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
		for (i=0; i<=n; i++){
			printf("%d\n", i);
		}
	
	return 0;
}*/

//2)
/*
#include <stdio.h>

int main(){
	int n, i, z;
	scanf("%d", &n);
	z = n;
		for (z=n; z>=0; z--){
			printf("%d\n", z);
		}
	
	
	
	return 0;
}
*/

//3
/*
#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
		for (i=0; i<=n; i++){
			if (i%2!=0){
				printf("%d\n", i);
			}
		}
	
	return 0;
}
*/










































