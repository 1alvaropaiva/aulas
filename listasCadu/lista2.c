/*
pequeno auxilio

printf("Um caracter impresso: %c\n", 'x');
printf("Uma string impressa: %s\n","Entendi tudo.");
printf("Numero impresso: %f\n",3.141517);
printf("Uma Casa: %.1f\n",3.141517);
printf("Duas Casas: %.2f\n",3.141517);
printf("Tres Casas: %.3f\n",3.141517);
printf("Notacao Cientifica: %e\n",3.141517);
printf("Valor: %5d \n",25);
printf("Valor: %10d \n",25);
*/

//lista 02

/* EXERCICIO 01 
#include <stdio.h>
#define PI 3.14159

int main (){
	float volume, raio, altura;
	printf("Digite o raio:\n");
	scanf("%f", &raio);
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	if (altura and raio > 0) {
		volume = PI * (raio*raio) * altura;
		printf("Volume do cilindro: %.2f", volume);
	} else {
		printf("precisa ser maior que zero");
	}
	
	return 0;
}*/

/* exercicio 2
#include <stdio.h>

int main(){
	int num1, num2, num3;
	printf("Digite 3 numeros: \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3 && num2 > num3){
		printf("Maior numero: %d\nSegundo maior: %d\nTerceiro maior: %d\n", num1, num2, num3);
	} else if (num1 > num2 && num1 > num3 && num3 > num2){
		printf("Maior numero: %d\nSegundo maior: %d\nTerceiro maior: %d\n", num1, num3, num2);
	} else if (num2 > num1 && num2 > num3 && num1 > num3){
		printf("Maior numero: %d\nSegundo maior: %d\nTerceiro maior: %d\n", num2, num1, num3);
	} else if (num2 > num1 && num2 > num3 && num3 > num1){
		printf("Maior numero: %d\nSegundo maior: %d\nTerceiro maior: %d\n", num2, num3, num1);
	} else if (num3 > num2 && num3 > num1 && num1 > num2){
		printf("Maior numero: %d\nSegundo maior: %d\nTerceiro maior: %d\n", num3, num1, num2);
	} else if (num3 > num2 && num3 > num1 && num2 > num1){
		printf("Maior numero: %d\nSegundo maior: %d\nTerceiro maior: %d\n", num3, num2, num1);
	} else {
		printf("escreveu algo errado");
	}
	
return 0;
}*/

/*exercicio 03
#include <stdio.h>

int main() {
    float salario, reajuste, novosalario;
    printf("\t AUMENTO DE SALARIO DOS COLABORADORES\n");

    printf("Digite seu salario: \n");
    scanf("%f", &salario);

    if (salario <= 280) {
        reajuste = 20;
    } else if (salario > 280 && salario < 700) {
        reajuste = 15;
    } else if (salario > 700 && salario < 1500) {
        reajuste = 10;
    } else {
        reajuste = 5;
	}

	float valor_reajuste = salario * (reajuste / 100);

    novosalario = salario + valor_reajuste;

    printf("Seu antigo salario era: %.2f\nVoce recebeu um reajuste de %.2f\nSeu novo salario: %.2f", salario, valor_reajuste, novosalario);

    return 0;
}
*/

/* exercicio 4
#include <stdio.h>
#define UVA 5.50
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
		printf("Sua conta deu: %.2f", totalpagar);
	} else if (sabor_suco == 2){
		printf("Quantos sucos deseja?\n");
		scanf("%d", &quantidade);
		totalpagar = quantidade * MORANGO;
		printf("Sua conta deu: %.2f", totalpagar);
	} else if (sabor_suco == 3){
		printf("Quantos sucos deseja?\n");
		scanf("%d", &quantidade);
		totalpagar = quantidade * LIMAO;
		printf("Sua conta deu: %.2f", totalpagar);
	} else if (sabor_suco == 4){
		printf("Quantos sucos deseja?\n");
		scanf("%d", &quantidade);
		totalpagar = quantidade * MARACUJA;
		printf("Sua conta deu: %.2f", totalpagar);
	} else if (sabor_suco == 5){
		printf("Quantos sucos deseja?\n");
		scanf("%d", &quantidade);
		totalpagar = quantidade * ABACAXI;
		printf("Sua conta deu: %.2f", totalpagar);
	} else {
		printf("Digite um valor de 1 a 5. ");
	}
	
	return 0;	
}*/


/*exercicio 5
#include <stdio.h>

int main() {
    float custo_fabrica, custo_cliente, imposto, distribuidor, var_reserva;
    printf("\tVALOR REAL DOS AUTOMOVEIS\n\n");

    printf("Digite o valor bruto do carro: \n");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000) {
    	distribuidor = custo_fabrica * 0.05;
        custo_cliente = distribuidor + custo_fabrica;
        printf("O carro custa %.2f reais para um cliente, sendo %.2f reais do distribuidor", custo_cliente, distribuidor);
    } else if (custo_fabrica > 12000 && custo_fabrica < 25000) {
        distribuidor = custo_fabrica * 0.10;
        imposto = custo_fabrica * 0.15;
        custo_cliente = distribuidor + custo_fabrica + imposto;
        printf("O carro custa %.2f reais para um cliente, sendo %.2f reais do distribuidor e %.2f reais de impostos", custo_cliente, distribuidor, imposto);
    } else if (custo_fabrica > 25000) {
        distribuidor = custo_fabrica * 0.15;
        imposto = custo_fabrica * 0.20;
        custo_cliente = distribuidor + custo_fabrica + imposto;
        printf("O carro custa %.2f reais para um cliente, sendo %.2f reais do distribuidor e %.2f reais de impostos", custo_cliente, distribuidor, imposto);
    } else {
        printf("Verifique os dados inseridos novamente.");
	}
	
    return 0;
}*/

/*exercicio 6
#include <stdlib.h>
#include <stdio.h>

int main(){
	printf("exercicio 6\n\n\n");
	float produto, aumento, novo_preco;
	
	printf("Digite o valor do produto e eu direi se esta caro ou nao, alem de seu percentual de aumento e novo valor:\n");
	scanf("%f", &produto);
	if (produto <= 50 && produto > 0){
		aumento = produto * 0.05;
		novo_preco = produto + aumento;
	} else if (produto > 50 && produto <= 100){
		aumento = produto * 0.10;
		novo_preco = produto + aumento;
	} else if (produto > 100){
		aumento = produto * 0.15;
		novo_preco = produto + aumento;
	} else {
		printf("Digite um numero positivo.");
		exit(0);
	}
	

	if (novo_preco <= 80){
		printf("Novo preco: %.2f. Valor do aumento: %.2f. Classificacao: barato", novo_preco, aumento);
	} else if (novo_preco > 80 && novo_preco <= 120){
		printf("Novo preco: %.2f. Valor do aumento: %.2f. Classificacao: normal", novo_preco, aumento);
	} else if (novo_preco > 120 && novo_preco <= 200){
		printf("Novo preco: %.2f. Valor do aumento: %.2f. Classificacao: caro", novo_preco, aumento);
	} else {
		printf("Novo preco: %.2f. Valor do aumento: %.2f. Classificacao: muito caro", novo_preco, aumento);
	}
	
		
	return 0;
}
*/


#include <stdio.h>

int main (){
	float num1, num2, resultado;
	int operacao;
	printf("Digite dois numeros: \n");
	scanf("%f %f", &num1, &num2);
	printf("Escolha a operacao desejada: \n");
	printf("1-media\n2-diferenca do maior pro menor\n3-produto entre os dois\n4-divisao do primeiro pelo segundo\n");
	scanf("%d", &operacao);
	switch (operacao){
		case 1: 
		resultado = (num1 + num2) / 2;
		printf("media: %.2f", resultado);
		break;
		case 2: 
		if (num1 > num2){
			resultado = num1 - num2;
			printf("diferenca do maior pro menor: %.2f", resultado);
		} else {
			resultado = num2 - num1;
			printf("diferenca do maior pro menor: %.2f", resultado);
		}
		break;
		case 3:
		resultado = num1 * num2;
		printf("produto: %.2f", resultado);
		break;	
		case 4:
		resultado = num1 / num2;
		printf("divisao do primeiro pelo segundo: %.2f", resultado);
		break;	
	}
	
	
	
	
	return 0;
}




























































