/*
 ============================================================================
 Name        : trabajo.c
 Author      : juan pablo alvarez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/**
 * explicacion del programa:
 *
 * estas son las bibliotecas que contienen a las funciones que vamos a llamar.
 * #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #include "funciones.h"
 *
 *  la funcion main: int main(void)
 *
 *  dentro de esa funcion va a estar corriendo practicamente todo el programa
 *
 *  luego tenemos el menu que consta de un ciclo do/while y un switch.
 *  el do/while corta el ciclo cuando el usuario ingresa un numero distinto de 5
 *  y el switch tiene el menu que muestra el programa (tiene 5 opciones)
 *
 *
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main(void)
{

	setbuf(stdout, NULL);

	// declaracion de las variables

	    int operaciones;
	    float numeroUno = 0;
	    float numeroDos = 0;
	    float mostrarSuma;
	    float mostrarResta;
	    float mostrarMultiplicacion;
	    float mostrarDivision;
	    int mostrarFactorial;
	    int mostrarFactorialdos;
	    int i = 0;
	    int j = 0;
	    int k = 0;

// inicio del programa

	    printf("bienvenidos \n");
	    do
	    {
	    	//ingresar una de las opciones del menu

	        printf(" menu de opciones:\n 1. primer operando %.1f \n 2. segundo operando %.1f \n 3. calcular todas las operaciones \n 4. mostrar los resultados \n 5. salir \n ", numeroUno, numeroDos);

	        scanf("%d", &operaciones);
            //menu

	        switch(operaciones)
	        {
	            case 1:
	            {
	            	//ingreso del primer numero

	                printf("ingrese un operando A :");

	                scanf("%f", &numeroUno);
	                 i = 1;
	                break;

	            }
	            case 2:
	            {
	            	// ingreso del segundo numero

	                printf("ingrese un segundo operando B : ");
	                scanf("%f", &numeroDos);
	                j = 1;
	                break;

	            }
	            case 3:
	            {
	            	// realizar las operaciones
	            	//nota: se debera ingresar los dos numeros para hacer las operaciones en caso de no hacerlo se mostrara un mensaje avisando al usuario que los ingrese
	                if(i == 1 && j == 1)
	                {
	                mostrarSuma =  sumar(numeroUno, numeroDos);
	                mostrarResta = restar(numeroUno, numeroDos);
	                mostrarMultiplicacion = multiplicar(numeroUno, numeroDos);
	                mostrarDivision =  dividir(numeroUno, numeroDos);
	                mostrarFactorial = factorial(numeroUno);
	                mostrarFactorialdos = factorialDos(numeroDos);
	                k = 1;
	                }
	                else
	                {
	                    printf("falta ingresar otro operando \n ");
	                }

	                break;

	            }
	            case 4:
	            {
	            	//muestra los resultados de las operaciones
	            	// al igual que el caso anterior el usuario debera haber ingresado numero y echo las cuentas para que le arroje el resultado
	                if(k == 1)
	                {
	                    printf("la suma es : %f \n", mostrarSuma);
	                printf("la resta es : %f \n", mostrarResta);
	                printf("la multiplicacion es : %f \n", mostrarMultiplicacion);
	                if(numeroUno == 0 || numeroDos == 0)
	                    {
	                        printf("no se puede hacer una division por cero \n ");
	                    }
	                    else
	                    {

	                        printf("el resultado de dividir es: %f \n", mostrarDivision);
	                    }
	                    printf(" el factorial es igual a : %d \n ",mostrarFactorial);
	                    printf(" el factorial es igual a : %d \n ",mostrarFactorialdos);
	                }
	                else
	                {
	                    printf("todavia no hiciste las operaciones \n");
	                }

	                break;
	            }
	            case 5:
	            {
	            	//salida del menu

	                printf("usted decidio salir ");


	                break;

	            }

	    }




	    }while(operaciones!=5);

	    //final del ciclo do/while y fin del programa

	return EXIT_SUCCESS;
}

