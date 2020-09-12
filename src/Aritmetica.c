	#include <conio.h>
	#include "Funciones.h"
	#include <time.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <windows.h>

int Calculadora(void)
{

	float a;
	float b;
	float suma;
	float resta;
	float division;
	float multiplicar;
	int factorialA;
	int factorialB;
	int exit = 0;
	int flag = 0;
	int flagA= 0;
	int flagB= 0;


	do
	{

		switch(Menu())

		{
			case 1:

				printf("   ingrese 1er operando: ");
				scanf("%f", &a);
				printf("\n   su numero: %.2f\n", a);
				flagA=1;
				Sleep(1000);
			break;


			case 2:

				printf("   ingrese 2do operando: ");
				scanf("%f", &b);
				printf("\n   su numero: %.2f\n", b);
				flagB=1;
				Sleep(1000);
			break;


			case 3:

				if(!(flagA==0 || flagB == 0))
				{
					suma = SumarNumeros(a, b);
					resta = RestarNumero(a, b);
					multiplicar = MultiplicarNumero(a, b);
					division = DividirNumero(a, b);
					factorialA = Factorial(a);
					factorialB = Factorial(b);
					printf("\n   calculando");
					printf(".");
					Sleep(500);
					printf(".");
					Sleep(500);
					printf(".");
					Sleep(500);
					printf(".");
					Sleep(500);
					printf(".");
					Sleep(500);
					printf("listo!\n   Opcion 4 para mostrar");
					Sleep(1200);
					flag=1;
				}
				else
				{
					printf("  Error!! faltan operandos");
					Sleep(1500);
				}
			break;


			case 4:

				if(!(flag==0))
				{
						printf("\nsuma           = (%.2f + %.2f) = %.2f\n", a, b,suma);
						printf("\nresta          = (%.2f - %.2f) = %.2f\n", a, b, resta);
						printf("\nmultiplicacion = (%.2f x %.2f) = %.2f\n", a, b, multiplicar);

						if(!(b==0))
						{
							printf("\ndivison        = (%.2f / %.2f) = %.2f\n", a, b, division);
						}
						else
						{
							printf("\nla division por 0 no existe\n");
						}


						if(!(a<0))
						{
							printf("\nel factorial del nro %.0f es: %d\n", a, factorialA);
						}
						else
						{
							printf("\nno existe el factorial de %.0f\n", a);
						}


						if(!(b<0))
						{
							printf("\nel factorial del nro %.0f es: %d\n", b, factorialB);
						}
						else
						{
							printf("\nno existe el factorial de %.0f\n", b);
						}
					getch();

				}
				else
				{
					printf("   Aun no se ha realizado ninguna operacion\n   presione el numero 3 para comenzar\n");
					getch();
				}
			break;

			case 5:

				printf("   gracias por participar");
				printf("\n   presione ENTER para salir");
				getch();
				exit = 1;
			break;


			default:
				printf("\n  opcion incorrecta");
				getch();
			break;
		}
	}while(exit!=1);
	return 0;
}

int Menu(void)
	{
		int opcion;

		system("cls");

		printf("-- 1. Ingresar 1er operando          --\n");
		printf("-- 2. Ingresar 2do operando          --\n");
		printf("-- 3. Calcular todas las operaciones --\n");
		printf("-- 4. Informar resultados            --\n");
		printf("-- 5. Salir                          --\n");
		printf("-- >  Elija una opcion: ");
		scanf("%d", &opcion);

		return opcion;
	}

float SumarNumeros(float x, float y)
	{
		float suma;
		suma = x + y;
		return suma;
	}

float RestarNumero(float x, float y)
	{
		float resta;
		resta = x - y;
		return resta;
	}

float DividirNumero(float x, float y)
	{
		float division;

		division =(float)x/y;

		return division;


	}

float MultiplicarNumero(float x, float y)

	{
		float multiplicar;
		multiplicar = x*y;
		return multiplicar;
	}

int   Factorial(int x)


	{
		int factorial;
		int i;


			factorial = 1;
			for(i=1;i<=x;i++)
			{
			factorial = factorial*i;
			}

		return factorial;



	}

































