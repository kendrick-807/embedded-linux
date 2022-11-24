
#include "randomNum.h"
#define INT_SIZE 3
#include <setjmp.h>
#include <signal.h>

static jmp_buf jbuf;
static void catch_segv()
{
    longjmp(jbuf, 1);
}

void scanNum(){
	int max = 0;
	int min = 0;
	int size = 0;
    	printf("Oops! You entered wrong format!\n"); 
	printf("Enter numbers by format max min range:\n");
	if(scanf("%d %d %d",&max,&min,&size) != 3 || min >= max || size == 0 || size >(max-min+1)){
	    printf("Oops! You entered wrong format AGAIN!\n"); 
	}else{
	    int p[size];
	    printf("Random numbers are:\n");
	    for(int i=0;i<size;i++){
	    	p[i] = randomNum(max,min);

	   }
	    for(int i=0 ; i < size; ++i){
               	printf(" %d ",p[i]);
    	    }    
    	}
    	
}

int main(int argc, char** argv){
    srand(time(NULL));


    signal(SIGSEGV, catch_segv);
    if(setjmp(jbuf) == 0){	
	
	int max = atoi(argv[1]);
        int min = atoi(argv[2]);
    	int size = atoi(argv[3]);
    	int p[size];
    	
   	 printf(" %d ",size);
	if(min >= max || size == 0 || size >(max-min+1)){
	    scanNum();
	    
	}else{
	    printf("Random numbers are:\n");
	    
	    for(int i=0;i<size;i++){
	    	
	    	p[i] = randomNum(max,min);
	    }
    	    
    	    
    	    for(int i=0 ; i < size; ++i){
                printf(" %d ",p[i]);
    	    }
    	}
    }else{
 	scanNum(); 
    }
}



