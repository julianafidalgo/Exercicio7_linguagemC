#include <stdio.h>
#include <stdlib.h>

#define exercicio7

/*7. Elabore um algoritmo que leia o peso e a
altura de um adulto e mostre sua condição. A fórmula é IMC = peso / (altura)2. */

#ifdef exercicio7
main ()
{
    float I, P, A, R;
    do{
     printf("Digite sua idade: ");
     scanf("%f", &I);

    if(I < 18) {
        printf("Voce precisa ter 18 anos ou mais para calcular seu IMC.\n ");
    }
} while (I < 18);

    do {
    printf("Digite seu peso: ");
    scanf("%f", &P);

    if(P < 0){
        printf("O peso nao pode ser negativo. \n ");

    }
} while (P < 0);

    do {
    printf("Digite sua altura: ");
    scanf("%f", &A);

    if(A < 0){
        printf("A altura nao pode ser negativa. \n ");

    }
} while (A < 0);

    R = (P / (A * A));

    if (R < 17) {
        printf("Seu IMC e': %.2f \nMuito abaixo do peso. ", R);
    } else if (R < 18.50){
        printf("Seu IMC e': %.2f \nAbaixo do peso. ", R);
    } else if (R < 25){
         printf("Seu IMC e': %.2f \nPeso normal. ", R);
    } else if (R < 30){
         printf("Seu IMC e': %.2f \nAcima do peso. ", R);
    } else if (R < 35){
         printf("Seu IMC e': %.2f \nObesidade I. ", R);
    } else if (R < 40){
         printf("Seu IMC e': %.2f \nObesidade II (severa). ", R);
    } else
     printf("Seu IMC e': %.2f \nObesidade III (morbida). ", R);
}

#endif exercicio7

