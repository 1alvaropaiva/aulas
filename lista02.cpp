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

#include <stdio.h>

int main(){
	int num1, num2, num3;
	printf("Digite 3 numeros: \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 and num3 && num2 > num3){
		printf("Maior numero: %d\nSegundo maior: %d\nTerceiro maior: %d\n", num1, num2, num3);
	} else if (num1 > num2 and num3 && num3 > num2){
		printf("Maior numero: %d\nSegundo maior: %d\nTerceiro maior: %d\n", num1, num3, num2);
	} else if (num2 > num1 and num3 && num1 > num3){
		printf("Maior numero: %d\nSegundo maior: %d\nTerceiro maior: %d\n", num2, num1, num3);
	} else if (num2 > num1 and num3 && num3 > num1){
		printf("Maior numero: %d\nSegundo maior: %d\nTerceiro maior: %d\n", num2, num3, num1);
	} else if (num3 > num2 and num1 && num1 > num2){
		printf("Maior numero: %d\nSegundo maior: %d\nTerceiro maior: %d\n", num3, num1, num2);
	} else if (num3 > num2 and num1 && num2 > num1){
		printf("Maior numero: %d\nSegundo maior: %d\nTerceiro maior: %d\n", num3, num2, num1);
	} else {
		printf("escreveu algo errado");
	}
	
return 0;
}




















