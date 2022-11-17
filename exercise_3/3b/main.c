
#include "randomNum.h"
#define INT_SIZE 3
#include <setjmp.h>
#include <signal.h>

static jmp_buf jbuf;
static void catch_segv()
{
    longjmp(jbuf, 1);
}




    

int main(int argc, char** argv){


    signal(SIGSEGV, catch_segv);
    if(setjmp(jbuf) == 0){	
    	int max = atoi(argv[1]);
    	int min = atoi(argv[2]);
    	int size = atoi(argv[3]);
    	int *p;
	if(min >= max || size == 0 || size >(max-min)){
	    printf("Oops! You entered wrong format!\n");
	}else{
	        printf("Random numbers are:\n");
    	    p = randomNum(max,min,size);
    	    for(int i=0 ; i < size; ++i){
                printf(" %d ",p[i]);
    	    }
    	}
    }else{
    	printf("Oops! You entered wrong format!\n");        
    }
}
