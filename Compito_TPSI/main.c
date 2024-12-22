#include <stdio.h>
#include "operazioni.h"
#include "potenze.h"
    
    int num1, num2, base, esponente;

    int main(void){

        float ris;
        char op;
        printf("Indica quale tipo di operazione effettuare: \n");
        printf("s. Somma\n");
        printf("d. Differenza\n");
        printf("m. Moltiplicazione\n");
        printf("i. Divisione\n");
        printf("p. Potenza\n");
        scanf(" %c", &op);
        switch (op)
        {
        case 's':
        printf("Inserisci i numeri da operare: \n");
          scanf("%d", &num1);
        scanf("%d", &num2);
            ris = somma(num1, num2);
            printf("%d + %d = %.2f\n", num1, num2, ris);
            break;
        case 'd':
        printf("Inserisci i numeri da operare: \n");
          scanf("%d", &num1);
        scanf("%d", &num2);
            ris = differenza(num1, num2);
            printf("%d - %d = %.2f\n", num1, num2, ris);
            break;
        case 'm':
        printf("Inserisci i numeri da operare: \n");
          scanf("%d", &num1);
        scanf("%d", &num2);
            ris = moltiplicazione(num1, num2);
            printf("%d * %d = %.2f\n", num1, num2, ris);
            break;
        case 'i': //Division
        printf("Inserisci i numeri da operare: \n");
          scanf("%d", &num1);
        scanf("%d", &num2);
            ris = divisione(num1, num2);
            printf("%d / %d = %.2f\n", num1, num2, ris);
            break;
        case 'p':
        printf("Inserisci i numeri da operare: \n");
          scanf("%d", &base);
        scanf("%d", &esponente);
            ris = potenze(base, esponente);
            printf("%d ^ %d = %.2f\n", base, esponente, ris);
            break;

        default:
            printf("Nessuna operazioni riconosciuta\n");
            break;
        }
    }