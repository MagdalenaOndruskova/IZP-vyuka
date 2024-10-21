#include <stdio.h>

int main() {
    char c;
    char hladany_znak;
    int pocet = 0;

    // Načítanie znaku, ktorý sa má hľadať
    scanf("%c", &hladany_znak);

    // Prejdenie vstupu a počítanie výskytov hľadaného znaku
    while ((scanf("%c", &c)) != EOF) {
        if (c == hladany_znak) {
            pocet++;
        }
    }

    printf("Znak '%c' sa objavil %d krát.\n", hladany_znak, pocet);
    return 0;
}