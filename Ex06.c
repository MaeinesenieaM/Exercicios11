#include <stdio.h>
#include <locale.h>

float imc (float quilos, float altura)
{
	float imc = quilos / (altura * altura);
	return imc;
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
	float peso, altura;

	//Aparentemente o setlocale também muda o jeito que o programa responde a números,
	//então quando digitar algum número quebrado use ',' em vez de '.'
	setlocale (LC_ALL, "Portuguese");

	printf("\n++Calculadora de IMC++\n\n");

	printf ("\nO Seu IMC é [%5.2f]\n", imc (readfloat ("Quilos", &peso), readfloat ("Altura", &altura)));

	printf ("\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");
	return 0;
}