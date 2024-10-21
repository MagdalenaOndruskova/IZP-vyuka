#include <stdio.h>
#include <ctype.h>

int main() {
   int cislo; //vytvarime si pole znaku
   int sum = 0;
    while (scanf("%i\n", &cislo) != EOF) //dokud nenarazime na konec souboru
    { 
        sum += cislo;
        // pre overenie ze vo vstupe je iba cislo
        if (scanf("%*[^0-9]") == EOF) {
            break;
        }
    }

    printf("Sucet cisiel zo subora je: %i", sum);
   return 0;
}