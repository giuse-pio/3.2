#include <stdio.h>

int main(void)
{
    int numero;
    printf("inserisci il valore del numero: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("Il numero e' negativo %d", numero);
    }
    else {
        printf("Il numero e' positivo %d", numero);
    }
}
