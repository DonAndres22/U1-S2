#include <stdio.h>

int main()
{

    int a;
    int b;
    int prodotto;
    float media;
    float divisione;

    printf("\n> Inserisci il primo numero:");
    scanf("%d", &a);
    printf("\n> Inserisci il secondo numero:");
    scanf("%d", &b);
    prodotto = a * b;
    media = (a+b)/2;
    if (a % b == 0 || b % a == 0){
        
         printf("\n> sono multipli");
    }
    else {
        printf("\n> non sono multipli");
    }
    printf("\n> La loro media aritmetica è:%.2f\n", media);
    printf("\n> Il loro prodotto è:%d\n", prodotto);
    return 0;

}
