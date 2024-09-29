
#include <stdio.h>
#include <stdlib.h>

int main(){
  int categoria;
  float preco, preco_final, variacao;
  
  printf("Digite a categoria do produto: \n\n1- higiene pessoal\t+10%%\n2- limpeza\t\t+15%%\n3- acougue\t\t-20%%\n4- padaria\t\t-20%%\n\n");
  scanf("%d", &categoria);
    	while (categoria == 0 || categoria > 4 || categoria<0){
    	printf("Digite um valor de 1 a 4: \n");
    	scanf("%d", &categoria);
  	}
  
	printf("Digite o preco do produto: \n");
	scanf("%f", &preco);
		while (preco<=0){
    	printf("O preco nao pode ser zero ou negativo. Digite novamente:\n");
  		scanf("%f", &preco);
  	}
  
  switch (categoria){
    case 1: {
      variacao = (preco)*0.10;
      preco_final = preco + variacao;
      printf("Categoria do produto: Higiene pessoal\nPreco original: %.2f\nAumento: %.2f\nPreco final: %.2f.", preco, variacao, preco_final);
      break;
    }
    case 2: {
      variacao = (preco)*0.15;
      preco_final = preco + variacao;
      printf("Categoria do produto: Limpeza\nPreco original: %.2f\nAumento: %.2f\nPreco final: %.2f.", preco, variacao, preco_final);
      break;
    }
    case 3: {
      variacao = (preco)*0.20;
      preco_final = preco - variacao;
      printf("Categoria do produto: Acougue\nPreco original: %.2f\nDesconto: %.2f\nPreco final: %.2f.", preco, variacao, preco_final);
      break;
    }
    case 4:{
      variacao = (preco)*0.20;	
      preco_final = preco - variacao;
      printf("Categoria do produto: Padaria\nPreco original: %.2f\nDesconto: %.2f\nPreco final: %.2f.", preco, variacao, preco_final);
      break;
    }
  }
  
  return 0;
}