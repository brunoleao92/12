#include <stdio.h>
#include <stdlib.h>
#include "TP1.h"

/** \brief Se utiliza para ingresar al menu de la calculadora.
 * \param Ingresa los operandos que el usuario quiera utilizar.
 * \param el usuario ingresa la operacion que desea realizar.
 * \return -
 */

void menu(void)
{
    float n1=0,n2=0,factorizarn1=0,factorizarn2=0;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.1f)\n",n1);
        printf("2- Ingresar 2do operando (B=%.1f)\n",n2);
        printf("3- Calcular la suma (%.1f+%.1f)\n",n1,n2);
        printf("4- Calcular la resta (%.1f-%.1f)\n",n1,n2);
        printf("5- Calcular la division (%.1f/%.1f)\n",n1,n2);
        printf("6- Calcular la multiplicacion (%.1f*%.1f)\n",n1,n2);
        printf("7- Calcular el factorial (%.1f) y el factorial de (%.1f)\n",n1,n2);
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        factorizarn1=factorizar(n1);
        factorizarn2=factorizar(n2);

        switch(opcion)
        {
            case 1:
                 printf("Ingrese el valor del primer operando:\n");
                 scanf("%f",&n1);
                break;
            case 2:
                printf("Ingrese el valor del segundo operando:\n");
                scanf("%f",&n2);
                break;
            case 3:
                printf("\nCalcular suma %.1f+%.1f=%.1f\n", n1,n2,sumar(n1,n2));
                system("pause");
                break;
            case 4:
                 printf("\nCalcular resta %.1f-%.1f=%.1f\n", n1,n2,restar(n1,n2));
                 system("pause");
                break;
            case 5:
                if(division(n1,n2)==0){
                    printf("Error.No se puede dividir por cero\n");
                    system("pause");
                }
                else{
                printf("\nCalcular division %.1f/%.1f=%.1f\n", n1,n2,division(n1,n2));
                system("pause");}
                break;
            case 6:
                printf("\nCalcular multiplicacion %.1f+%.1f=%.1f\n", n1,n2,multiplicacion(n1,n2));
                system("pause");
                break;
            case 7:if(factorizarn1 == -1){
                    printf("Error. No se puede factorizar un numero negativo.\n");
                    }

                    else{
                        printf("Calcular factoreo A=%.1f=%.1f\n", n1,factorizarn1);
                        }
                    if(factorizarn2 == -1){
                        printf("Error. No se puede factorizar un numero negativo.\n");
                        system("pause");
                    }
                    else{
                        printf("Calcular factoreo B=%.1f=%.1f\n\n", n2,factorizarn2);
                        system("pause");}
                break;
            case 8:printf("\nEl resultado de %.1f+%.1f es:%.1f ", n1,n2,sumar(n1,n2));
                printf("\nEl resultado de %.1f-%.1f es:%.1f ", n1,n2,restar(n1,n2));
                printf("\nEl resultado de %.1f*%.1f es:%.1f ", n1,n2,multiplicacion(n1,n2));

                if(division(n1,n2)==0){
                    printf("\nError.No se puede dividir por cero.\n");

                }
                else{
                    printf("\nCalcular division %.1f/%.1f=%.1f\n", n1,n2,division(n1,n2));

                }

                if(factorizarn1 == -1){
                    printf("Error. No se puede factorizar un numero negativo.\n");
                    }

                    else{
                        printf("Calcular factoreo A=%.1f=%.1f\n", n1,factorizarn1);
                        }
                    if(factorizarn2 == -1){
                        printf("Error. No se puede factorizar un numero negativo.\n");
                        system("pause");
                    }
                    else{
                        printf("Calcular factoreo B=%.1f=%.1f\n\n", n2,factorizarn2);
                        system("pause");}
                system("pause");
                break;
            case 9:
                printf(" Adios!!!\n ");
                system("pause");
                seguir = 'n';
                break;
        }




    system("cls");

}
}

/** \brief Realiza la operacion suma.
 * \param Pide al usuario los valores de los operandos.
 * \return El resultado de la opercion.
 */

float sumar(float n1,float n2){
    float suma;
    suma=n1 + n2;
    return suma;
}

/** \brief Realiza la operacion resta.
 * \param Pide al usuario los valores de los operandos.
 * \return El resultado de la opercion.
 */
float restar(float n1,float n2)
{
    float resta;
    resta=n1-n2;
    return resta;
}


/** \brief Realiza la operacion multiplicacion.
 * \param Pide al usuario los valores de los operandos.
 * \return El resultado de la opercion.
 */
float multiplicacion(float n1, float n2)
{
    float mult;
    mult=n1*n2;
    return mult;
}
/** \brief Realiza la operacion division.
 * \param Pide al usuario los valores de los operandos.
 * \return El resultado de la opercion.
 */
float division(float n1, float n2){
    float div;
    if(n1==0 || n2==0){
        return 0;
    }
    else{
    div=n1/n2;
    return div;}
}
/** \brief Realiza la operacion factorizar.
 * \param Pide al usuario los valores de los operandos.
 * \return El resultado de la opercion.
 */
long factorizar(float n1){
    if(n1==1 || n1==0){
        return 1;
    }
    else if(n1<0){
        return -1;
    }

    else {

        return (long)(n1*factorizar(n1-1));
    }

}



