#include <stdio.h>
#include <locale.h>

int readInt ()
{
	int entrada;
	printf ("#: ");
	scanf ("%d", &entrada);
	return entrada;
}

int maior (int a, int b)
{
	if (a >= b) { return a; }
	else		{ return b; }
}

int main ()
{
	int numero01;
	int numero02;

	setlocale (LC_ALL, "Portuguese");

	printf ("Insira dois valores para serem comparados.\n");

	numero01 = readInt();
	numero02 = readInt();

	int resultado = maior (numero01, numero02);

	printf ("O Maior número entre eles é: %d", resultado);

	printf ("\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}