#include <stdio.h>
#include <locale.h>

double volume (float altura, float raio)
{
	const double pi = 3.1414592;
	double volume;

	volume = pi * (raio * raio) * altura;

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
	float altura, raio;

	setlocale (LC_ALL, "Portuguese");

	printf ("Insira os valores de um Cilindro para calcular seu volume.\n");

	printf ("\nVolume total: %.2lf\n", volume (readfloat ("Altura", &altura),	readfloat ("Raio", &altura)));

	printf ("\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}