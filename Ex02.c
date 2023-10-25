#include <stdio.h>
#include <locale.h>

int limitador (int numero, int limiteMinimo, int limiteMaximo)
{
	fflush(stdin);
	if (numero < limiteMinimo || numero > limiteMaximo)
	{
		printf ("\n!!VALOR INVÁLIDO TENTE NOVAMENTE!!\n\n");
		return 1; //Retorna 1 em caso esteja fora dos limites
	}
	else
	{
		return 0; //Retorna 0 se tudo estiver em ordem.
	}
}
//	 | declara o retorno da função como uma string literal
//	 v
char *meses (int mes) //Retorna o mês correspondente com o valor.
{
	switch (mes)
	{
		case 1:
			return "Janeiro";
		case 2:
			return "Fevereiro";
		case 3:
			return "Março";
		case 4:
			return "Abril";
		case 5:
			return "Maio";
		case 6:
			return "Junho";
		case 7:
			return "Julho";
		case 8:
			return "Agosto";
		case 9:
			return "Setembro";
		case 10:
			return "Outubro";
		case 11:
			return "Novembro";
		case 12:
			return "Dezembro";
		default:
			return "Mês nulo";
	}
}

int mesesDias (int mes) //Retorna os dias de acordo com o mês.
{
	switch (mes)
	{
		case 1: case 3:case 5: case 7: case 8: case 10: case 11:
			return 31;
		case 4: case 6: case 9: case 12:
			return 30;
		case 2:
			return 28;
		default:
			printf ("\n!!VALOR INVÁLIDO!!\n");
			break;
	}
}

int readInt (int *entrada)
{
	fflush(stdin);
	printf ("#: ");
	scanf ("%d", &*entrada);
	return *entrada;
}

int main ()
{
	int mes;

	setlocale (LC_ALL, "Portuguese");

	printf ("Insira o número de qualquer mês.\n");

	while (limitador (readInt (&mes), 1, 12) == 1);

	printf ("O Mês selecionado: %s\nDias no mês: %d\n", meses(mes), mesesDias(mes));

	printf ("\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}