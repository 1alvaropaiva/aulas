//https://www.computersciencemaster.com.br/exercicios-if-e-else/ 
//exercicios intermediarios e dificeis

//7 - Faça um programa que leia três números, verifique (usando if e else) e mostre o maior e o menor deles; 
/*
#include <stdio.h>

int main(){
	float num1, num2, num3;
	scanf("%f %f %f", &num1, &num2, &num3);
	
	while (num1==num2||num2==num3||num3==num1){
		printf("numeros nao podem ser iguais.\n");
		scanf("%f %f %f", &num1, &num2, &num3);
	}	
	
	if (num1>num2 && num1>num3 && num2>num3){
		printf("%.2f\n%.2f\n%.2f\n", num1, num2, num3);
	} else if (num1>num2 && num1>num3 && num3>num2){
		printf("%.2f\n%.2f\n%.2f\n", num1, num3, num2);
	} else if (num2>num1 && num2>num3 && num1>num3){
		printf("%.2f\n%.2f\n%.2f\n", num2, num1, num3);
	} else if (num2>num1 && num2>num3 && num3>num1){
		printf("%.2f\n%.2f\n%.2f\n", num2, num3, num1);
	} else if (num3>num1 && num3>num2 && num1>num2){
		printf("%.2f\n%.2f\n%.2f\n", num3, num1, num2);
	} else {
		printf("%.2f\n%.2f\n%.2f\n", num3, num2, num1);
	}
	
	return 0;
}*/

//8 - Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre o mais barato.  
/*
#include <stdio.h>

int main(){
	float produto1, produto2, produto3;
	
	
	printf("digite o valor de 3 produtos:\n");
	scanf("%f %f %f", &produto1, &produto2, &produto3);
	while (produto1<=0||produto2<=0||produto3<=0){
		printf("produtos nao podem valer menos que 1 centavo.\n");
		scanf("%f %f %f", &produto1, &produto2, &produto3);
	}
	while (produto1==produto2||produto2==produto3||produto3==produto1){
		printf("produtos nao podem ter o mesmo valor.\n");
		scanf("%f %f %f", &produto1, &produto2, &produto3);
	}
	while (produto1<=0||produto2<=0||produto3<=0){
		printf("produtos nao podem valer menos que 1 centavo.\n");
		scanf("%f %f %f", &produto1, &produto2, &produto3);
	}
	while (produto1==produto2||produto2==produto3||produto3==produto1){
		printf("produtos nao podem ter o mesmo valor.\n");
		scanf("%f %f %f", &produto1, &produto2, &produto3);
	}
	
	
	if (produto1<produto2&&produto1<produto3){
		printf("produto 1.");
	} else if (produto2<produto1&&produto2<produto3){
		printf("produto 2.");
	} else {
		printf("produto 3.");
	}
	
	return 0;
}*/

//9- Faça um programa que leia três números e mostre-os em ordem decrescente. 
/*
#include <stdio.h>

int main(){
	float n1, n2, n3;
	scanf("%f %f %f", &n1, &n2, &n3);
	
	while (n1==n2||n1==n3||n2==n3){
		printf("nao digite numeros iguais:\n");
		scanf("%f %f %f", &n1, &n2, &n3);
	}
	
	if (n1<n2&&n1<n3&&n2<n3){
		printf("%.2f\n%.2f\n%.2f", n1, n2, n3);
	} else if (n1<n2&&n1<n3&&n3<n2){
		printf("%.2f\n%.2f\n%.2f", n1, n3, n2);
	} else if (n2<n1&&n1<n3&&n2<n3){
		printf("%.2f\n%.2f\n%.2f", n2, n1, n3);
	} else if (n2<n1&&n3<n1&&n2<n3){
		printf("%.2f\n%.2f\n%.2f", n2, n3, n1);
	} else if (n3<n2&&n3<n1&&n1<n2){
		printf("%.2f\n%.2f\n%.2f", n3, n1, n2);
	} else {
		printf("%.2f\n%.2f\n%.2f", n3, n2, n1);
	}
	
	
	
	return 0;
}*/

//11
/*
#include <stdio.h>

int main(){
	float sal, au, novosal;
	printf("digite um salario maior que zero reais:\n");
	scanf("%f", &sal);
	
	while (sal<=0){
		printf("digite um salario maior que zero reais:\n");
		scanf("%f", &sal);
	}
	
	if (sal<=280.00){
		au = (sal*0.20);
		novosal = sal + au;
		printf("salario inicial: %.2f\naumento (20%%): %.2f\nnovo salario: %.2f", sal, au, novosal);		
	} else if (sal>280.00&&sal<=700.00){
		au = (sal*0.15);
		novosal = sal + au;
		printf("salario inicial: %.2f\naumento (15%%): %.2f\nnovo salario: %.2f", sal, au, novosal);		
	} else if (sal>700.00&&sal<=1500.00){
		au = (sal*0.10);
		novosal = sal + au;
		printf("salario inicial: %.2f\naumento (10%%): %.2f\nnovo salario: %.2f", sal, au, novosal);		
	} else {
		au = (sal*0.05);
		novosal = sal + au;
		printf("salario inicial: %.2f\naumento (5%%): %.2f\nnovo salario: %.2f", sal, au, novosal);		
	}
	
	return 0;
}*/

//12
/*
#include <stdio.h>

int main(){
	int x;
	float sal, ir, fgts, inss, sindicato, salfinal, totdesc, hora, valorh;
	
	printf("digite o valor da hora trabalhada: \n");
	scanf("%f", &valorh);
	while (valorh<=0){
		printf("nao pode ser zero ou negativo:\n");
		scanf("%f", &valorh);
	}
	
	printf("digite a quantidade de horas trabalhadas: \n");
	scanf("%f", &hora);
	while (hora<=0){
		printf("nao pode ser zero ou negativo:\n");
		scanf("%f", &hora);
	}
	
	sal = valorh * hora;
	
	if (sal<=900.00){
		ir = 0;
		x = 0;
	} else 	if (sal>900.00&&sal<=1500.00){
		ir = (sal*0.05);
		x = 5;
	} else 	if (sal>1500.00&&sal<=2500.00){
		ir = (sal*0.10);
		x = 10;
	} else {
		ir = (sal*0.20);
		x = 20;
	}
	
	sindicato = (sal*0.03);
	fgts = (sal*0.11);
	inss = (sal*0.10);
	totdesc = sindicato + inss + ir;
	salfinal = sal - totdesc;
	
	printf("Salario bruto (%.2f * %.2f):\tR$: %.2f\n(-)SINDICATO:\tR$: %.2f\n", valorh, hora, sal, sindicato);
	printf("(-)IR (%d%%):\tR$: %.2f\n(-)INSS (10%%):\tR$: %.2f\n(+)FGTS (11%%):\tR$: %.2f\n(-)DESCONTOS:\tR$: %.2f\nSALARIO FINAL:\tR$: %.2f\n", x, ir, inss, fgts, totdesc, salfinal);
	
	return 0;
}*/

















































































































