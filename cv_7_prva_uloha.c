#include <stdio.h>
#include <ctype.h>
#include <string.h>

void transform_to_upper(char* str, int size){
    char str2[size];
    for(int i =0; i<size; i++){
        str2[i] = toupper(str[i]);
    }
    printf("%s\n", str2);
}

void ceasar_cipher(char *str, int size, int shift){
    char str_caesar[size]; 
    for(int i =0; i<size; i++){
        if (isdigit(str[i])){
            str_caesar[i] = str[i]; 
            continue;
        }
        char base_char = 'a';
        if (isupper(str[i])){
            base_char = 'A';
        }
        str_caesar[i] = (str[i] - base_char + shift) % 26 + base_char;

    }
    
    printf("Caesar: %s\n", str_caesar);
    
}

void print_arr(int *arr, int size){
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]); 
    }
    printf("\n");
}

void multiply_array(int *arr, int size){
    for (int i=0; i<size; i++){
       arr[i] = *(arr+i) * 10;
    }
}

void reverse_arr(int *arr, int size){
    int tmp; 
    for (int i=0; i<size/ 2; i++){
       tmp = *(arr + i);
       arr[i] = arr[size - 1 - i];
       arr[size - 1 - i] = tmp;
    }
}

int main(int argc, char* argv[])
{
    char str[] = "Hello";
    transform_to_upper(str, 5);
    ceasar_cipher(str, 5, 2);
    
    int arr[7]= {1,2,3,4,5,6, 7};
    print_arr(arr, 7);

    for (int i = 1; i < argc; i++){
        printf("Argument: %s\n", argv[i]);

        if (strcmp(argv[i], "-multiply") == 0){
            multiply_array(arr, 7);
            print_arr(arr, 7);
            continue;
        }
        if (strcmp(argv[i], "-reverse") == 0){
            reverse_arr(arr, 7); 
            print_arr(arr, 7);
            continue;

        }
    }
    
    

    return 0;
}