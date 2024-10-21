#include <stdio.h>
#include <math.h>

// Definícia štruktúry Kruh
typedef struct {
    float polomer;
    float stredX;
    float stredY;
} Kruh;

// Funkcia na výpočet obvodu kruhu
float obvodKruhu(Kruh k) {
    return 2 * M_PI * k.polomer;
}

// Funkcia na výpočet obsahu kruhu
float obsahKruhu(Kruh k) {
    return M_PI * pow(k.polomer, 2);
}

// Funkcia na výpočet vzdialenosti medzi dvoma kruhmi
float vzdialenostMedziKruhmi(Kruh k1, Kruh k2) {
    float dx = k2.stredX - k1.stredX;
    float dy = k2.stredY - k1.stredY;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Kruh kruh1 = {5.0, 0.0, 0.0};
    Kruh kruh2 = {7.0, 10.0, 0.0};

    printf("Obvod kruhu 1: %.2f\n", obvodKruhu(kruh1));
    printf("Obsah kruhu 1: %.2f\n", obsahKruhu(kruh1));

    float vzdialenost = vzdialenostMedziKruhmi(kruh1, kruh2);
    printf("Vzdialenosť medzi stredmi kruhov: %.2f\n", vzdialenost);

    return 0;
}
