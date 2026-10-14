#include <stdio.h>
/*
int massimo(int n1, int n2){
    return n1 > n2 ? n1 : n2;
}

int main(){
    int n1, n2;

    printf("Scrivi 2 numeri: ");
    scanf("%d %d", &n1, &n2);

    printf("Il massimo tra %d e %d è: %d\n", n1, n2, massimo(n1,n2));
}
*/

/*
int massimo(int n1, int n2, int n3){
    if(n1 >= n2 && n1 >= n3){
        return n1;
    }else if(n3 >= n2){
        return n3;
    }else{
        return n2;
    }
}

int main(){
    int n1, n2, n3;

    printf("Scrivi 3 numeri: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Il massimo tra %d, %d e %d è: %d\n", n1, n2, n3, massimo(n1,n2, n3));
}
*/

int massimo(int n1, int n2){
    return n1 > n2 ? n1 : n2;
}

int main(){
    int n1, n2, n3, temp;

    printf("Scrivi 3 numeri: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    temp = massimo(n1, n2);

    printf("Il massimo tra %d, %d e %d è: %d\n", n1, n2, n3, massimo(temp, n3));
}