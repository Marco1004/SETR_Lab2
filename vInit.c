#include "vInit.h"

int* vInit(){
    int size = 10;
    int numbers[10];
    for (int i= 0; i<size; i++){
        numbers[i]= rand();
    }
    return numbers;
}