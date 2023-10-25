#include <stdio.h>
#include <locale.h>


double convertor (float fahrenheit)
{
	double celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
	return celsius;
}

float readfloat (float *entrada)
{
	fflush(stdin);
	printf ("#: ");
	scanf ("%f", &*entrada);
	return *entrada;
}

int main ()
{
	float graus;

	setlocale (LC_ALL, "Portuguese");

	printf ("Insira um valor de graus em Fahrenheit para ser convertido em Celsius.\n");
	printf ("\nResultado: %.2lf °C\n", convertor (readfloat (&graus)));

	printf ("\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}