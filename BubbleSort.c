#include <stdio.h>
#include <stdbool.h>
#include<unistd.h>
#define MAX 10
#include <unistd.h>
#include <stdio.h>
#include<stdio.h>
#include<dos.h>

main() {

    int i, temp,sorted,passes;
    int size = 300;
    int array[size];

    for(i=0; i<size; i++) {
        array[i] = (rand()%100);

    }
    printf("[UNSORTED LIST]\n");
    for(i=0; i<size; i++) {
        printf("%d, ",array[i]);

    }
    printf("\n\n");
    passes = 0;

    while(1) {
        sorted = 0;
        for(i=0; i<size-1; i++) {

            if(array[i]>array[i+1]) {
                printf("[%d,%d]\t\t%d > %d\t\t"
                       ,array[i],array[i+1],array[i],array[i+1]);
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                passes++;
                sorted = 1;

                printf(" [%d,%d]\n\n",array[i],array[i+1]);

            }
        }
        if(sorted ==0 ) {
            break;
        }
    }


    printf("\nSort completed with [%d] passes.\n\n\n",passes);
    printf("[SORTED LIST]\n");

    for(i=0; i<size; i++) {
        printf("%d, ",array[i]);



    }

      printf("\n\n");
    return 0;
}
