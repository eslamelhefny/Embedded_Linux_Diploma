#include<stdio.h>


int main(int argc ,char** argv ){
    // for(__uint8_t i = 0 ; i<argc;i++){
    //     printf("%d : %s\n",i,argv[i]);
    // }
    if(argc == 1 )
        puts("Hello From Eslam ");
    else {
        printf("hello form %s\n",argv[1]);
    }

    return 0  ; 
}
/*
@todo:
print hello from for every arguments 
*/


