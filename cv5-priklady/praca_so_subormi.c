#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    if (input == NULL || output == NULL) {
        printf("Chyba pri otvarani suboru\n");
        return 1;
    }

    char c;
    while ((c = fgetc(input)) != EOF) {
        fputc(toupper(c), output); // Prevod na velke pismena a zapis do suboru
    }

    fclose(input);
    fclose(output);
    return 0;
}
