
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "randomNum.h"

int  randomNum(int max, int min){
    int r = 0;
    r = (rand() % (max - min)) + min;
    return r;
  }

