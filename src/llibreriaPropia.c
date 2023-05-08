#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <stdbool.h> 
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

void acabament (void)
{
	printf("\nPrem una tecla per finalitzar");
	getch();
}

int demanarNumero()
{
	int x;
	printf("Introdueix un número: ");
	scanf("%d",&x);
	return x;
}

int demanarNumeroMesPetitLimit(int maxim)
{
	int x;
	printf("Introdueix un número: ");
	scanf("%d",&x);
	while (x > maxim)
	{
		printf("Introdueix un número més petit del límit [ <= %d", maxim);
		scanf("%d",x);
	}
	return x;
}

int demanarNumeroEntreDosValors(int minim, int maxim)
{
	int x;
	scanf("%d",&x);
	while (x<minim || x>maxim)
	{
		printf("Introdueix un valor vàlid [ %d - %d ]: ", minim, maxim);	
		scanf("%d",&x);
	}
	return x;
}

int generarNumeroEntreDosValors(int minim, int maxim)
{
	return (rand() % (maxim - minim + 1) + minim);
}