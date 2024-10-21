#include <stdio.h>

struct Datum {
    int den;
    int mesiac;
    int rok;
};

struct Osoba {
    int vek;
    int vyska;
    struct Datum datumNarodenia;
};

int main()
{
    printf("Hello World");
    struct Osoba osoba1;

    osoba1.vek = 25;
    osoba1.vyska = 1.80;
    
    osoba1.datumNarodenia.den = 15;
    osoba1.datumNarodenia.mesiac = 10;
    osoba1.datumNarodenia.rok = 1995;
    
    printf("Vek: %i, Datum narodenia: %i.%i.%i.", osoba1.vek, osoba1.datumNarodenia.den,
                                                osoba1.datumNarodenia.mesiac,
                                                osoba1.datumNarodenia.rok);
    return 0;
}