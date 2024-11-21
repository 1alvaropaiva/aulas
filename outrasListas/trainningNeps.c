
/*#include <math.h>
#include <stdlib.h>
int main(){
	int i;
	i=1;
	do {
		printf("%d", i);
		i=i+1;
		
	} while (i<=10);
	
	return 0;
}

/*#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int cont, num, x = 0;
	scanf("%d", &cont);
	for (int i=0; i<cont;){
		scanf("%d", &num);
		if (num==1&&i<cont){
			i++;
			scanf("%d", &num);
			if (num==0&&i<cont){
				i++;
				scanf("%d", &num);
				if (num==0&&i<cont){
				x++;
				i++;
				} else {
					i++;
				}
			} else{
				i++;
			}
		} else {
			i++;
		}
	}

	printf("%d", x);
	return 0;
} */
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	int sexo, totalMulher = 0, totalHomem = 0;
	float altura, maiorAltura = 0, menorAltura = 10*10, somaAlturaHomem;

	for (int i=0; i<4; i++) {
		printf("digite o sexo. 1 homem 2 mulher: \n");
		scanf("%d", &sexo);
		printf("digite a altura: \n");
		scanf("%f", &altura);

		if (sexo==1) {
			somaAlturaHomem += altura;
			totalHomem++;
		} else if (sexo==2) {
			totalMulher++;
		} else        {

			printf("opcao invalida.");
			exit(1);
		}

		if (altura>maiorAltura) {
			maiorAltura = altura;
		} else if (altura<menorAltura) {
			menorAltura = altura;
		}
	}

	printf("maior altura: %.2f\nmenor altura: %.2f\n", maiorAltura, menorAltura);
	printf("media de altura dos homens: %.2f\n", (somaAlturaHomem/totalHomem));
	printf("total de mulheres: %d\n", totalMulher);

	return 0;
}*/