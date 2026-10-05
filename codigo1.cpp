//Suma de numeros
#include <stdio.h>
int main() {
    int numero, suma = 0;
    printf("Ingrese un numero entero (0 para terminar): ");
    scanf("%d", &numero);
    while (numero != 0) {
        suma = suma + numero;
        printf("Ingrese otro numero entero (0 para terminar): ");
        scanf("%d", &numero);
    }
    printf("La suma total es: %d\n", suma);
    return 0;
}