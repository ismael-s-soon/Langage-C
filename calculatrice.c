#include <stdio.h>

void addition() {
    int a, b;
    printf("Addition : Entrez deux nombres : ");
    if (scanf("%d %d", &a, &b) == 2)
        printf("Résultat = %d\n", a + b);
    else
        printf("Entrée invalide !\n");
}

void soustraction() {
    int a, b;
    printf("Soustraction : Entrez deux nombres : ");
    if (scanf("%d %d", &a, &b) == 2)
        printf("Résultat = %d\n", a - b);
    else
        printf("Entrée invalide !\n");
}

void multiplication() {
    int a, b;
    printf("Multiplication : Entrez deux nombres : ");
    if (scanf("%d %d", &a, &b) == 2)
        printf("Résultat = %d\n", a * b);
    else
        printf("Entrée invalide !\n");
}

void division() {
    int a, b;
    printf("Division : Entrez deux nombres : ");
    if (scanf("%d %d", &a, &b) == 2) {
        if (b != 0)
            printf("Résultat = %.2f\n", (float)a / b);
        else
            printf("Erreur : Division par zéro !\n");
    } else {
        printf("Entrée invalide !\n");
    }
}

int main() {
    int choix;
    while (1) {
        printf("\nMenu :\n");
        printf("1. Addition\n");
        printf("2. Soustraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: addition(); break;
            case 2: soustraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            case 0: return 0;
            default: printf("Choix invalide.\n");
        }
    }
}
