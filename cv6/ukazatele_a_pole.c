#include <stdio.h>

// Funkcia na nájdenie ukazovateľa na najväčšie číslo v poli
int* najdiNajvacsie(int *arr, int velkost) {
    int *najvacsie = arr; // Začneme s prvým prvkom
    for (int i = 1; i < velkost; i++) {
        if (*(arr + i) > *najvacsie) {
            najvacsie = arr + i; // Aktualizujeme ukazovateľ, ak nájdeme väčšie číslo
        }
    }
    return najvacsie;
}

// Funkcia na nájdenie ukazovateľa na najmenšie číslo v poli
int* najdiNajmensie(int *arr, int velkost) {
    int *najmensie = arr; // Začneme s prvým prvkom
    for (int i = 1; i < velkost; i++) {
        if (*(arr + i) < *najmensie) {
            najmensie = arr + i; // Aktualizujeme ukazovateľ, ak nájdeme menšie číslo
        }
    }
    return najmensie;
}

// Funkcia na výmenu dvoch čísel
void vymenCisla(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int velkost;

    // Načítanie veľkosti poľa od užívateľa
    printf("Zadajte velkost pola: ");
    scanf("%d", &velkost);

    int pole[velkost];

    // Načítanie prvkov poľa od užívateľa
    printf("Zadajte %d cisel:\n", velkost);
    for (int i = 0; i < velkost; i++) {
        scanf("%d", &pole[i]);
    }

    // Nájdenie ukazovateľov na najväčší a najmenší prvok
    int *najvacsie = najdiNajvacsie(pole, velkost);
    int *najmensie = najdiNajmensie(pole, velkost);

    // Vymením najväčšie a najmenšie číslo
    vymenCisla(najvacsie, najmensie);

    // Výpis poľa po výmene
    printf("Pole po vymene najvacsieho a najmensieho cisla:\n");
    for (int i = 0; i < velkost; i++) {
        printf("%d ", pole[i]);
    }
    printf("\n");

    return 0;
}
