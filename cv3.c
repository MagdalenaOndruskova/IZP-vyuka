#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc,char* argv[])
{
    // reverz retazca 
    char vstup[21]; 
    char vystup[21] = ""; 
    
    scanf("%20s", vstup); 
    int index= 0;
    for(int i = strlen(vstup) -1; i >=0 ; i--){
        vystup[index] = vstup[i]; 
        index++; 
    }
    
    printf("Vstupny retazec: %s\n", vstup); 
    printf("Vystupny retazec: %s\n", vystup); 
    
    // overenie palindromu
    if (strcmp(vstup, vystup) == 0){
        printf("Je palindrom.\n");
    }
    else{
        printf("Nie je palindrom.\n");
    }
  
    // Scitanie hodnot z argumentov 
    // int a = atoi(argv[1]);
    // int b = atoi(argv[2]); 
    
    // printf("Sucet je %i", a+b);

    
    // porovnanie argumentov - kostra 
    if(strcmp(argv[1], "count") == 0){
        printf("Robim count\n"); 
        
    }
    
    else if(strcmp(argv[1], "replace") == 0){
        printf("Robim replace\n"); 
    }
    
    else if(strcmp(argv[1], "toupper") == 0){
        printf("Robim toupper\n"); 
    }
    

    return 0;
    
}

