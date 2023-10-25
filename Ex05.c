#include <stdio.h>
#include <locale.h>

double volume (float raio)
{
	const double pi = 3.1414592;
	double volume;

	volume = 4.0 / 3.0 * pi * (raio * raio * raio);

	return volume;
}

float readfloat (char *texto, float *entrada)
{
	fflush(stdin);
	printf ("%s: ", texto);
	scanf ("%f", &*entrada);
	return *entrada;
}

int main ()
{
	float raio;

	setlocale (LC_ALL, "Portuguese");

	printf("Insira os valores para o volume de esfera.\n");

	printf ("\nO Volume total da esfera é: %.2lf", volume (readfloat ("Raio", &raio)));

	printf ("\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}