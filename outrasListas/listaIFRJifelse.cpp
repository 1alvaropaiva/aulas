//lista ifrj

//1)
/*
#include <stdlib.h>
#include <stdio.h>

int main (){
	float n1, n2;
	scanf("%f %f", &n1, &n2);
	
	while (n1==n2){
		printf("nao digite numeros iguais");
		scanf("%f %f", &n1, &n2);
	}
	
	if (n1>n2){
		printf("%.2f", n1);
	} else {
		printf("%.2f", n2);
		
	}
	
	
	return 0;
}
*/

//2)	
/*
#include <stdlib.h>
#include <stdio.h>

int main (){
	int nascimento, ano;
	ano = 2024;
	scanf("%d", &nascimento);
	
	while (nascimento <= 1900 || nascimento >= 2024){
		printf("digite a data correta\n");
		scanf("%d", &nascimento);
	}
	
	if ((ano-nascimento) >= 18){
		printf("pode votar");
	} else {
		printf("nao pode votar");
	}
	
	

	
	return 0;
}
*/

//3)
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	int senha, pass;
	pass = 1234;
	scanf("%d", &senha);
	if (senha == pass){
		printf("ACESSO PERMITIDO");
	} else {
		printf("ACESSO NEGADO");
	}
	
	return 0;
}
*/

//4)
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	float maca, valor_total;
	int qtd;
	
	scanf("%d", &qtd);
	while (qtd<=0){
		printf("digite corretamente\n");
		scanf("%d",  &qtd);
	}
	
	if (qtd >= 12){
		maca = 0.25;
		valor_total = qtd*maca;
		printf("%.2f", valor_total);
	} else {
		maca = 0.30;
		valor_total = qtd*maca;
		printf("%.2f", valor_total);
	}
	
	
	return 0;
}
*/

//5)
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	while (a == b || a == c || b == c){
		printf("nao digite numeros iguais\n");
		scanf("%d %d %d", &a, &b, &c);
	}
	
	if (a > b && a > c && b > c){
		printf("%d %d %d", a, b, c);
	} else if (a > b && c > b && a > c){
		printf("%d %d %d", a, c, b);
	} else if (b > a && a > c && b > c){
		printf("%d %d %d", b, a, c);
	} else if (b > a && b > c && c > a){
		printf("%d %d %d", b, c, a);
	} else if (c > b && c > a && a > b){
		printf("%d %d %d", c, a, b);
	} else if (c > b && c > a && b > a){
		printf("%d %d %d", c, b, a);
	}
	
	
	return 0;
}
*/

//6)
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	int sexo;
	float altura, pideal;
	
	printf("digite sua altura:\n");
	scanf("%f", &altura);
	while (altura<=0){
		printf("digite a altura correta\n");
		scanf("%f", &altura);
	}
	
	printf("digite 1 para masculino ou 2 para feminino:\n");
	scanf("%d", &sexo);
	while (sexo>=3 || sexo<=0){
		printf("digite 1 ou 2\n");
		scanf("%d", &sexo);
	}
	
	switch (sexo){
		case 1: {
			pideal = (altura*72.7) - 58;
			printf("peso ideal: %.2f", pideal);
			break;
		}
		case 2: {
			pideal = (altura*62.1) - 44.7;
			printf("peso ideal: %.2f", pideal);
			break;
		}
	}
	
	return 0;
}
*/

// 7) e 8)
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int lados, cm;
	float area;
	
	printf("digite o numero de lados \n");
	scanf("%d", &lados);
	while (lados<=0){
		printf("digite de novo\n");
		scanf("%d", &lados);
	}
	
	printf("digite os centimetros \n");
	scanf("%d", &cm);
	while (cm<=0){
		printf("digite de novo\n");
		scanf("%d", &cm);
	}
	
	if (lados >= 6){
		printf("POLIGONO NAO IDENTIFICADO");
	} else if (lados <= 2){
		printf("NAO E UM POLIGONO");		
	} 
	
	switch (lados){
		case 3: {
			area = ((cm*cm) * sqrt(3)) / 4;
			printf("TRIANGULO. AREA: %.2f", area);
			break;
		}
		case 4: {
			area = cm*cm;
			printf("QUADRADO. AREA: %.2f", area);
			break;
		}
		case 5: {
			printf("pentagono");
			break;
		}
	}
	
	
	return 0;
}
*/
//9)
/*
#include <stdio.h>
#include <stdlib.h>


int main(){
	int v1, v2, v3, var;
	scanf("%d %d %d", &v1, &v2, &v3);
	
	while (v1==v2 || v1==v3 || v2==v3){
		printf("nao digite valores iguais\n");
		scanf("%d %d %d", &v1, &v2, &v3);
	}
	
	if (v1>v2 && v1 > v3){
		printf("%d", v1);
	} else if (v2>v1 && v2 > v3){
		printf("%d", v2);
	} else {
		printf("%d", v3);
	}
	
	
	
	return 0;
}
*/

//10)
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	int l1, l2, l3;
	scanf("%d %d %d", &l1, &l2, &l3);
	while (l1<=0 || l2<=0 || l3<=0){
		printf("digite valores positivos.\n");
		scanf("%d %d %d", &l1, &l2, &l3);
	}
	
	if (l1!=l2 && l2!=l3 && l1!=l3){
		printf("triangulo escaleno");
	} else if (l1==l2 && l2==l3){
		printf("triangulo equilatero");
	} else {
		printf("triangulo isoscele");
	}
	
	return 0;
}
*/


















































