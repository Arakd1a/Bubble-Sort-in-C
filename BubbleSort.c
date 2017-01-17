#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, temp, sorted;
    int numbersListSize = 10;
    int numbersList [numbersListSize];

    for(i=0; i<numbersListSize; i++) {
        numbersList[i] = ( rand()%25)+1;
    }

    printf("UNSORTED\n");
    for(i=0; i<numbersListSize; i++) {
        printf(" %d \n", numbersList[i]);
    }


    while(1) {
        sorted = 0;
        for(i=0; i<numbersListSize-1; i++) {
            if(numbersList[i] >numbersList[i+1]) {
                int temp = numbersList[i];
                numbersList[i] =   numbersList[i+1];
                numbersList[i+1] =   temp;
                sorted = 1;
            }
        }
        if(sorted==0) {
            break;
        }
    }
    printf("\n\n");
    printf("SORTED LIST\n");
    for(i=0; i<numbersListSize; i++) {
        printf(" %d \n", numbersList[i]);
    }


    return 0;


}
