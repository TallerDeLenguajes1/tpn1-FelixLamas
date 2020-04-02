#include <stdio.h>

int main(int argc, char const *argv[])
{
    int entero = 100, *P_entero, tamanio;
    P_entero= &entero;

    printf("El contenido del puntero P_entero %p \n", P_entero);
    printf("La direccion de memoria almacenada por el puntero P_entero %p \n", P_entero);
    printf("La direccion de memoria del entero es %p \n", &entero);
    printf("La direccion de memoria del puntero P_entero %p \n", &P_entero);
    tamanio=sizeof(entero);
    printf("El tamaña de menoria utilizado por el entero es %d", tamanio);

    return 0;
}