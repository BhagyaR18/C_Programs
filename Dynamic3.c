#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int *ptr = NULL;


         //Step 1 : Allocate the memory
    ptr = (int *)malloc(sizeof(int) * 5);      // 20 bytes


        //Step 2 : Use the memory (In LB)

    ptr = (int *)malloc(sizeof(int) * 7);      // 28 bytes

     //ptr = (int *)malloc(sizeof(int) * 3);   // 12 bytes
     
        //Step 3 : Deallocate the memory 
        free(ptr);
    
    return 0;
}
