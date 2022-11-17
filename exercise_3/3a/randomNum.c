
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "randomNum.h"
#include <malloc.h>

int * randomNum(int max, int min, int size){
    srand(time(NULL));
    int *r = malloc(sizeof(size));
    
    for(int i=0 ; i<size ; ++i){

        r[i] = (rand() % (max - min)) + min;
        
    }
    free(r);
    return r;
  }

