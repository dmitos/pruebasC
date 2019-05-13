#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PARCIAL 2016 - Ejercicio 2
    int a, b, c;
    float dis;
    float raiz;

    //Obtener del usuario los valores para los coeficientes reales a, b, c
    printf("Ingrese valores para a, b, c: ");
    scanf ("%d%d%d",&a,&b,&c);
    printf ("El valor de a: %d - b: %d - c: %d",a,b,c);

    // Si el coeficiente a vale cero entonces
    if (a == 0)
    {
        //Emitir mensaje indicando que el coeficiente principal no puede ser cero
        printf ("\n El coeficiente principal no puede ser cero");
    }
    else //Sino
    {
        //Calcular el valor del discriminante b2 - 4.a.c
        dis = b*b - 4*a*c;
        printf ("\nDiscriminante %f3", dis);

        //Si el discriminante es negativo entonces
        if (dis < 0)
        {
            //Emitir mensaje indicando que la ecuación no tiene raíces reales
            printf ("\n La ecuacion no tiene raices reales ");
        }
        else //Sino
        {
            //Si el discriminante es cero entonces
            if (dis = 0)
            {
            //calcular y desplegar la unica raiz (-b)/(2.a)

            raiz=(-b)/(2*a);
            printf ("\nRaiz %f5.3", raiz);
            }
            else //Sino
            {
                // Calcular y desplegar las dos raíces de la ecuación:

                printf ("\nCalcular y desplegar las dos raices de la ecuacion");
            }
        }
    }
    return 0;
}
