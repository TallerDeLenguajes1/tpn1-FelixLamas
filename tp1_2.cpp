#include <stdio.h>

int cuadrado(int num);
void cuadrado2 (int num, int *P_num);
void invertir (int *P_prim, int *P_seg);
void ordenar(int *P_prim, int *P_seg);

int main(int argc, char const *argv[])
{
    int numero, resultado1, resultado2, primero, segundo;
    printf("Ingrese el numero: ");
    scanf("%d", &numero);
    resultado1 = cuadrado(numero);
    printf("El cuadrado del numero %d es %d resultado obtenido de la funcion que devuelve un entero\n", numero, resultado1);
    cuadrado2(numero, &resultado2);
    printf("El cuadrado del numero %d es%d resultado obtenido de la funcion void \n",numero, resultado2 );
    printf("Ingrese dos numeros enteros");
    scanf("%d %d", &primero, &segundo);
    printf("Los dos numeros enteros antes del intercambio: %d y %d \n", primero, segundo);
    invertir(&primero, &segundo);
    printf("Los dos numeros enteros despues del intercambio: %d y %d \n", primero, segundo);
    printf("Ingrese dos numeros enteros");
    scanf("%d %d", &primero, &segundo);
    ordenar(&primero, &segundo);
    printf("Los dos numeros enteros ordenados de menor a mayor : %d y %d \n", primero, segundo);


    return 0;
}

void cuadrado2 (int num, int *P_num)
{
  *P_num = num * num;
}

int cuadrado(int num)
{
    printf("La variable recibida es %d", num);
    printf("\nLa direccion de memoria de la variable es %p\n", &num);
    return num*num;
}

void invertir (int *P_prim, int *P_seg)
{
  int aux;
  aux = *P_prim;
  *P_prim = *P_seg;
  *P_seg= aux;
}

void ordenar(int *P_prim, int *P_seg)
{
  int aux;
  if(*P_prim > *P_seg)
  {
    aux = *P_prim;
    *P_prim = *P_seg;
    *P_seg = aux; 
  }
}