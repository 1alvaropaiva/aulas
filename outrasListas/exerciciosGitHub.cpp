/*ex015
repositorio do github


#include <stdlib.h>
#include <stdio.h>

int main(){
	float sal_bruto, sal_hora, hora_mes, inss, sindi, sal_liq, imposto, desconto;

	printf("Quanto vc ganha por hora: \n");
	scanf("%f", &sal_hora);
	if (sal_hora <= 0){
		printf("Digite o valor correto.");
		exit(1);
	}

	printf("Quantas horas vc trabalhou esse mes: \n");
	scanf("%f", &hora_mes);
	if (hora_mes <= 0){
		printf("Digite o valor correto.");
		exit(1);
	} else if (hora_mes > 700) {
		printf("Digite o valor correto.");
		exit(1);
	}

	sal_bruto = sal_hora * hora_mes;
	inss = sal_bruto * 0.08;
	imposto = sal_bruto * 0.11;
	sindi = sal_bruto * 0.05;
	desconto = sindi + inss + imposto;
	sal_liq = sal_bruto - desconto;

	printf("+ Salario bruto: %.2fR$\n- IR (11%): %.2fR$\n- INSS (8%): %.2fR$\n- Sindicato (5%): %.2fR$\n= Salario liquido: %.2fR$\n\n", sal_bruto, imposto, inss, sindi, sal_liq);
	printf("Voce teve %.2fR$ de desconto sobre seu salario total.", desconto);

	return 0;
}*/

/* ex016
#include <stdlib.h>
#include <stdio.h>

int main(){
	int aream2, litros, latas_nec, valor_total;

	printf("Digite a area em m2: \n");
	scanf("%d", &aream2);
		while (aream2 <= 0){
			printf("A area deve ser um valor positivo.\n");
			scanf("%d", &aream2);
		}

	litros = aream2 * 3;
	latas_nec = litros / 18;
		if (litros % 18 != 0){
			latas_nec++;
		}

	valor_total = latas_nec * 80;

	printf("Serao necessarias %d latas de tinta, que custara um total de %d reais.", latas_nec, valor_total);

	return 0;
}*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int aream2, litros, latas_nec, valor_total, galoes_nec, resto;

	printf("Digite a area em m2: \n");
	scanf("%d", &aream2);
	while (aream2 <= 0)
	{
		printf("A area deve ser um valor positivo.\n");
		scanf("%d", &aream2);
	}

	litros = aream2 * 3;
	latas_nec = litros / 18;
	if (litros % 18 >= 1 && litros % 18 <= 3.6)
	{
		galoes_nec++;
	}
	else if (litros % 18 >= 3.6 && litros % 18 <= 7.2)
	{
		galoes_nec + 2;
	}
	else if (litros % 18 >= 7.2 && litros % 18 <= 10.8)
	{
		galoes_nec + 3;
	}
	else if (litros % 18 >= 10.8 && litros % 18 <= 14.4)
	{
		galoes_nec + 4;
	}
	else
	{
		galoes_nec + 5;
	}

	if (latas_nec == 0)
	{
		valor_total = galoes_nec * 25;
	}
	else
	{
		valor_total = (latas_nec * 80) + (galoes_nec * 25);
	}

	if (galoes_nec = 1)
	{
		printf("Serao necessarias %d latas de tinta e %d galao, que custarao um total de %d reais.", latas_nec, galoes_nec, valor_total);
	}
	else if (galoes_nec > 1 && galoes_nec <= 5)
	{
		printf("Serao necessarias %d latas de tinta e %d galoes, que custarao um total de %d reais.", latas_nec, galoes_nec, valor_total);
	}
	else
	{
		printf("Serao necessarias %d latas de tinta, que custarao um total de %d reais.", latas_nec, valor_total);
	}

	return 0;
}
