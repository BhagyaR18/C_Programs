#include<stdio.h>

#include "PPA.h"    // user defined file name is in double cots,,,,,,,  <<<<<<---------  same folder mdhe ahe mhnun

int main()
{
    struct Demo obj;

    printf("Inside the main\n");

    printf("Rate of interest is :%f\n",ROI);   //10.7

    printf("Fees of Logic Building Batch :%d\n",FEES);   //18200

    printf("Size of demo structure :%d\n",sizeof(obj));   // 8

    return 0;
}