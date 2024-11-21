#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

/*

//lista 3 repeticao 


exercicio 1

int main(){
	int i, j;
	float raiz;
	
	for (i=0; i<3; i++){
		scanf("%d", &j);
		while (j<0){
			printf("nao pode ser negativo\n");
			scanf("%d", &j);
		}
		
		raiz = sqrt(j);
		printf("%.2f\n", raiz);
		
	}
	return 0;	
}


exercicio 2

int main (){
	float altJ = 1.10, altC = 1.50;
	int ano = 0;
	
	while (altC>altJ){
		altJ += 0.03;
		altC += 0.02;
		ano++;
	}
	
	printf("%d anos", ano);
	
	return 0;
}


exercicio 3 

int main(){
	int a = 1, b = 1, i = 0, s = a/b;
	
	for (; i<s; i++){
		printf("S = %d / %d\n", a, b);
		a+=2;
		b++;
		s += a/b;
		if (a>=99&&b>=50){
			break;
		}
	}
	
	printf("S = %d / %d\n", a, b);
	printf("%d", s);
	return 0;	
}


exercicio 4 

int main(){
	int s = 1, b = 2, n, i = 0, cont = 0;
	
	scanf("%d", &n);
	printf("s = 1 \n");
	
	for (; i<n; i++){
		printf("+ 1 / %d\n", b);
		s += 1/b;
		b++;
		cont += s;
		if (b>n){
			break;
		}
	}
	
	printf("valor: %d", cont);
	
	return 0;
}


exercicio 5

int main(){
	int n, nErr = 0, total = 0, maiorN = 0, menorN = 11, mediapar = 0, npar = 0;
	
	while (1){
		
		scanf("%d", &n);
		
		if (n==-1){
			if (npar==0){
				printf("erro: nenhum numero par foi digitado\n");
				return 1;
			} else {
				printf("fim do loop\n");
			}
			break;
		}
		
		while (n<0||n>10){
			nErr++;
			total++;
			printf("numeros devem estar entre 0 e 10. tente novamente: \n");
			scanf("%d", &n);
		}
		
		if (n>=maiorN){
			maiorN = n; 
		}
		
		if (n<=menorN){
			menorN = n; 
		}
		
		if (n%2==0){
			mediapar += n;
			npar++; 
		}
		
	
		total++;
	}
	
	printf("numeros errados: %d\n", nErr);
	printf("total de numeros: %d\n", total);
	printf("total de numeros pares: %d\n", npar);
	printf("media dos pares: %d\n", mediapar/npar);
	printf("menor numero: %d\n", menorN);
	printf("maior numero: %d\n", maiorN);
	
	return 0;
}


exercicio 6

int main(){
	int id, op, op1 = 0, op2 = 0, op3 = 0, idop3 = 0, total = 0;
	float pct2; 
	
	for (int i=0; i<12; i++){
		
		printf("idade: \n");
		scanf("%d", &id);
		
		while (id<=0||id>120) {
			printf("digite a idade corretamente:\n");
			scanf("%d", &id);	
		} 
		
		printf("3-excelente\n2-bom\n1-regular\n");
		scanf("%d", &op);	
		
		if (op==1){
			op1++;
			total++;
		} else if (op==2){
			op2++;
			total++;
		} else if (op==3){
			idop3 += id;
			op3++;
			total++;
		} else {
			printf("digite a opcao corretamente.\n");
			i--;
		}
	}
	
	pct2 = op2 * 100 / total;
	
	if (op3==0&&op1==0){
		printf("media de idade das que responderam excelente: 0\n");
		printf("quantidade de pessoas que responderam regular: 0\n");
		printf("percentagem de pessoas que responderam bom entre todos os espectadores: %.2f%%", pct2);
	} else if (op3==0) {
		printf("media de idade das que responderam excelente: 0\n");
		printf("quantidade de pessoas que responderam regular: %d\n", op1);
		printf("percentagem de pessoas que responderam bom entre todos os espectadores: %.2f%%", pct2);
	} else if (op1==0) {
		printf("media de idade das que responderam excelente: %d\n", idop3/op3);
		printf("quantidade de pessoas que responderam regular: 0\n");
		printf("percentagem de pessoas que responderam bom entre todos os espectadores: %.2f%%", pct2);
	} else {
		printf("media de idade das que responderam excelente: %d\n", idop3/op3);
		printf("quantidade de pessoas que responderam regular: %d\n", op1);
		printf("percentagem de pessoas que responderam bom entre todos os espectadores: %.2f%%", pct2);
	}
	
	return 0;
}


exercicio 7

int main(){
	int id, casada30 = 0, solteira22 = 0, idV = 0, viuva = 0, desquit = 0, total = 0;
	char ec;
	
	while (1){
		printf("idade: \n");
		printf("(digite 0 para finalizar o algoritmo)\n");
		scanf("%d", &id);
		
		while (id<0){
			printf("digite a idade corretamente: \n");
			scanf("%d", &id);
		}
		
		if (id==0){
			printf("fim do programa\n");
			break;
		} else {
			printf("estado civil\n");
			printf("c-casado\ns-solteiro\nv-viuvo\nd-desquitado ou separado\n");
			scanf(" %c", &ec);
			ec = toupper(ec);
			if (ec=='C'&&id<=30){
				casada30++;
			} else if (ec=='S'&&id>=22){
				solteira22++;
			} else if (ec=='V'){
				idV+=id;
				viuva++;
			} else if (ec=='D'){
				desquit++;
			} else {
				printf("digite novamente.\n");
			}
		} 
		
		total++;
	}
	if (total==0){
		printf("pessoas casadas com idade menor ou igual 30: %d\n", casada30);
		printf("pessoas solteiras maiores de 22 anos: %d\n", solteira22);
		printf("media de idade das viuvas: nao tiveram viuvas.\n");
		printf("porcentagem de pessoas desquitadas ou separadas: 0%%\n");
	} else {
		if (idV==0&&viuva==0){
			printf("pessoas casadas com idade menor ou igual 30: %d\n", casada30);
			printf("pessoas solteiras maiores de 22 anos: %d\n", solteira22);
			printf("media de idade das viuvas: nao tiveram viuvas.\n");
			printf("porcentagem de pessoas desquitadas ou separadas: %.2f%%\n", (desquit * 100.0) / total );
		
		} else {
			printf("pessoas casadas com idade menor ou igual 30: %d\n", casada30);
			printf("pessoas solteiras maiores de 22 anos: %d\n", solteira22);
			printf("media de idade das viuvas: %d\n", idV/viuva);
			printf("porcentagem de pessoas desquitadas ou separadas: %.2f%%\n", (desquit * 100.0) / total );	
		}
	}
	
	return 0;
}


exercicio 8

int main(){
	int num, multip = 1, ref;
	
	printf("numero de referencia:\n");
	scanf("%d", &ref);
	
	for (int i=0; i<10; i++){
		scanf("%d", &num);
		if (num>ref){
			if (num%2==0){
				if (num%5==0){
					multip *= num;
				}
			}
		} else {
			continue;
		}
	}
	
	printf("produto dos numeros: %d", multip);
	
	return 0;
}


exercicio 9 

int main (){
	int tab, start, end;
	
	printf("montar a tabuada do numero: \n");
	scanf("%d", &tab);
	printf("comeca em: \n");
	scanf("%d", &start);
	printf("termina em: \n");
	scanf("%d", &end);
	
	if (start>end){
		printf("tente novamente");
		return 1;
	} else if (tab<=0||start<=0||end<=0||tab>10||start>10||end>10){
		printf("tente novamente");
		return 1;
	} else {
		for (; start<=end; start++) {
			printf("%d x %d = %d\n", tab, start, tab*start);
		}
	}
	
	return 0;
}


exercicio 10 

int main(){
	int a, n1, n2;
	
	printf("primeiro termo: \n");
	scanf("%d", &n1);
	printf("segundo termo: \n");
	scanf("%d", &n2);
	
	for (int i=3; i<=20; i++){
		
		if (i%2==0){
			a = n2 - n1	;
		} else {
			a = n2 + n1;
		}
		
		n1 = n2;
		n2 = a;
		
		printf("%d\t", a);
	}
	
	return 0;
}

exercicio 11

int main(){
	int num, resul;
	
	while (1){
		
		scanf("%d", &num);
		
		if (num<1000||num>9999){
			printf("fim do programa");
			return 1;
		}
		
		resul = (num / 100) + (num % 100);
		resul = resul*resul;
		
		if (resul==num){
			printf("atende\n");
		} else {
			printf("nao atende\n");
		}
		
	}
	
	return 0;
}
*/
