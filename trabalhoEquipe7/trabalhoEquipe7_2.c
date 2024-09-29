#include <stdio.h>

int main(){
	int c1 = 0, c2 = 0, c3 = 0, nulo = 0, branco = 0, voto, voto_total = 12, i;
	printf("Eleicoes 2024\n\nVote 1 para candidato1.\nVote 2 para candidato2.\nVote 3 para candidato3.\nVote 4 para anular seu voto.\nVote 5 para votar em branco.\n");
	
	for (i=0; i<12;){
		scanf("%d", &voto);
		while (voto==1){
			c1++;
			i++;
			break;
		}
		while (voto==2){
			c2++;
			i++;
			break;
		}
		while (voto==3){
			c3++;
			i++;
			break;
		}
		while (voto==4){
			nulo++;
			i++;
			break;
		}
		while (voto==5){
			branco++;
			i++;
			break;
		}
		if (voto<=0 || voto>5){
			printf("Digite um numero de 1 a 5:\n");
		}
	}
	
	printf("c1: %d votos.\nporcentagem de votos: %.2f%%\n", c1, ((c1*100.0)/voto_total));
	printf("c2: %d votos.\nporcentagem de votos: %.2f%%\n", c2, ((c2*100.0)/voto_total));
	printf("c3: %d votos.\nporcentagem de votos: %.2f%%\n", c3, ((c3*100.0)/voto_total));
	printf("nulo: %d votos.\nporcentagem de votos: %.2f%%\n", nulo, ((nulo*100.0)/voto_total));
	printf("branco: %d votos.\nporcentagem de votos: %.2f%%\n", branco, ((branco*100.0)/voto_total));
		
	return 0;
}



























