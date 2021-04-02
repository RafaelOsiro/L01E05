// Exercicio_5.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a quantidade de metros avulsos de fios que ele precisa 
adquirir. Sabe-se que o construtor tem a quantidade total de fios em metros a serem utilizados na instalação elétrica da obra e que cada rolo 
de fio tem 50 metros.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	char *c;

	//Variable Declaration
	int rollQuantity, singleWires, totalOfMeters;
	bool validation;

	//Code
	//printf("Programa para calcular a quantidade de rolos!");

	validation = false;

	
	while (validation != true) // false
	{
		printf("Digite a quantidade de metros total: ");
		scanf("%d", &totalOfMeters);

		if (totalOfMeters < 0)
		{
			printf("\nDados invalidos!\n");
			printf("Digite um valor positivo!\n\n");
			validation = false;
		}
		else
		{
			validation = true;
		}
	}

	rollQuantity = totalOfMeters / 50;
	singleWires = totalOfMeters % 50;

	printf("\n\n");
	printf("A quantidade de rolos necessario e : %d\n", rollQuantity);
	if (singleWires > 0)
	{
		printf("A quantidade de fio avulso necesario e: %d\n", singleWires);
	}

	scanf("%c", &c);
	return 0;
}