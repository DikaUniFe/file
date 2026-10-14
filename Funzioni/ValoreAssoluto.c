#include <stdio.h>

int valoreAssoluto(int n) {
    return n >= 0 ? n : -n;
}

int main(){

    int n;
    printf("Scrivi un numero intero: ");
    scanf("%d", &n);

    printf("Il valore assouto di %d è: %d\n", n, valoreAssoluto(n));
}