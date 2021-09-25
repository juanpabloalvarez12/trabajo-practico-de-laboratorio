/*
 * funciones.c
 *
 *  Created on: 23 sep. 2021
 *      Author: mer_a
 */

#include "funciones.h"

/**
 * @fn: int factorial(int)
 * @brief: es una funcion que contiene el calculo del factorial en base al primer numero que el usuario ingrese
 *
 * @param: operandoUno
 * @return resultado: final de la funcion
 */
int factorial(int operandoUno)
{

    int Resultado=0;

    Resultado = 1;
    while(operandoUno > 1) {
       Resultado *= operandoUno;
       operandoUno--;
    }


  return Resultado;
}
/**
 * @fn: int factorialDos(int)
 * @brief: al igual que la funcion anterior basicamente es lo mismo
 * contiene el calculo de factorial a un numero en este caso el segundo que el usuario ingrese
 *
 * @param: operandoDos
 * @return resultado: fin de la funcion
 */
int factorialDos(int operandoDos)
{
     int Resultado=0;

    Resultado = 1;
    while(operandoDos > 1) {
       Resultado *= operandoDos;
       operandoDos--;
    }

    return Resultado;
}

/**
 * @funcion : float sumar(float, float)
 * desarrollo: realiza una suma entre dos numeros
 *
 * param: operandoUno
 * param: operandoDos
 * retorna sumar
 */
    float sumar(float operandoUno, float operandoDos)
    {
        float sumar;
        sumar = operandoUno + operandoDos;
        return sumar;
    }
    /**
     * @funcion: float restar(float, float)
     * desarrollo: contiene una resta entre dos numeros
     *
     * param: operandoUno
     * param: operandoDos
     * retorna restar
     */
    float restar(float operandoUno, float operandoDos)
    {
        float restar;
        restar = operandoUno - operandoDos;
        return restar;
    }
    /**
     * funcion: float multiplicar(float, float)
     * @brief: contiene una multiplicacion entre dos numeros
     *
     * @param: operandoUno
     * @param: operandoDos
     * @return multiplicar : final de la funcion
     */
    float multiplicar(float operandoUno, float operandoDos)
    {
        float multiplicar;
        multiplicar = operandoUno * operandoDos;

        return multiplicar;
    }
    /**
     * @fn: float dividir(float, float)
     * @brief: contiene la division entre dos numeros ademas de un if y else que determinan que pasa si el usuario
     * quiere realizar una operacion por cero
     *
     * @param: operandoUno
     * @param: operandoDos
     * @return dividir: fin de la funcion
     */
    float dividir(float operandoUno, float operandoDos)
    {
         float dividir;

        if(operandoUno == 0 || operandoDos == 0)
                    {
                        //printf("no se puede hacer una division por cero");
                    }
                    else
                    {
                        dividir = operandoUno / operandoDos;
                        //printf("el resultado de dividir es: %f \n", dividir);
                    }
                    return dividir;
    }

