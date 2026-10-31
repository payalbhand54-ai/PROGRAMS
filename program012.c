#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int no = 0;

    printf("Enter number :\n");
    if(scanf("%d",&no) !=1)
    {
        fprintf(stderr,"Invalid input\n");
        //fprintf() — prints formatted text to a specified stream.
        //stderr — standard error stream, used to display error messages

        return EXIT_FAILURE;
    }

    printf("Input is valid\n");

    

    return EXIT_SUCCESS;
}
