//LISTA 1

/*EXERCICIO 01

#include <stdio.h>

int main (){
	float num1, num2, num3, num4, num5, soma, media;
	printf("Exercicio 1.\n");
	printf("Digite cinco numeros: \n");
	scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
	media = (num1 + num2 + num3 + num4 + num5) /5;
	printf("%2.f", media);
		
	return 0;
}*/

/*EXERCICIO 02

/*#include <stdio.h>

int main (){
	float a, b, valx;
	printf("digite um valor para a e b\n");
	scanf("%f %f", &a, &b);
	valx = (a + b) / (a - b);
	printf("%2.f", valx);
	
	return 0;
}*/

/*EXERCICIO 03

#include <stdio.h>

int main (){
	int num1, num2, num3, d, r, s;
	printf("Digite 3 numeros positivos e inteiros: \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	r = (num1 + num2) * (num1 + num2);
	s = (num2 + num3) * (num2 + num3);
	d = (r + s) /2;
	printf("%d", d);
			
	return 0;
}*/

/*EXERCICIO 04

#include <stdio.h>

int main(){
	int raio, volume, area;
	printf("digite o raio da esfera: \n");
	scanf("%d", &raio);
	volume = 4 / 3 * 3,14 * (raio * raio);
	area = 4 * 3,14 * (raio * raio); 
	printf("o volume da circunferencia: %d\n", volume);
	printf("a area da circunferencia: %d\n", area);
	return 0;
}*/

/* EXERCICIO 05

#include <stdio.h>

int main (){
	float saldo, reajuste, novosaldo;
	printf("Digite seu saldo atual\n");
	scanf("%f", &saldo);
	reajuste = (saldo / 100) * 5;
	novosaldo = saldo + reajuste;
	printf("antigo saldo: %2.f \nreajuste: %2.f \nnovo saldo: %2.f\n", saldo, reajuste, novosaldo);
	
	return 0;
}*/

/*EXERCICIO 06

#include <stdio.h>
#include <math.h>

int main (){
	float lado1, lado2, lado3, area, te, raiz;
	printf("digite os lados do triangulo: \n");
	scanf("%f %f %f", &lado1, &lado2, &lado3);
	te = (lado1 + lado2 + lado3) / 2;
	raiz = te * (te - lado1) * (te - lado2) * (te - lado3);
	area = sqrt(raiz);
	printf("a area do triangulo: %f\n", area);
	
	
	return 0;
}*/

/*EXERCICIO 07

#include <stdio.h>

int main(){
	int comprimento, largura, aream2, wattsnec;
	printf("Digite o comprimento e a largura do ambiente: \n");
	scanf("%d %d", &largura, &comprimento);
	aream2 = largura * comprimento;
	printf("Area em metros quadrados: %d\n", aream2);
	wattsnec = aream2 * 18;
	printf("Watts necessarios para iluminar o ambiente: %dw\n", wattsnec);
		
	return 0;
}*/

/*EXERCICIO 08

#include <stdio.h>

int main(){
	int num, dezenas, unidades, soma;
	printf("digite um numero: \n");
	scanf("%d", &num);
	unidades = num % 10;
	printf("%d\n", unidades);
	dezenas = (num / 10) % 10;
	printf("%d\n", dezenas);
	soma = unidades + dezenas;
	printf("a soma da dezena e unidade: %d", soma);
}*/

/*EXERCICIO 09

#include <stdio.h>

int main(){
	int a, b, troca1, troca2;
	printf("Digite o valor de A: \n");
	scanf("%d", &a);
	printf("Digite o valor de B: \n");
	scanf("%d", &b);
	troca1 = (a + b) - a;
	troca2 = (a + b) - b;
	printf("novo valor de a: %d\nnovo valor de b: %d", troca1, troca2);
	
	return 0;
}*/