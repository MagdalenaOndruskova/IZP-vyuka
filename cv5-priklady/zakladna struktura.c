#include <stdio.h>

typedef struct Person{
    int age;
    int height;
} osoba; 

void vypisOsobu(osoba o) {
    printf("Vek: %d, Výška: %d cm\n", o.age, o.height);
}

    
int main()
{
    osoba person1;
    person1.age = 25;  
    person1.height = 167;

    // Výpis osoby
    vypisOsobu(person1);
    return 0;
}
