#include<stdio.h>

void Demo()
{
    static int No = 10;
    No++;

    printf("%d\n",No);
}

intT main()
{
    Demo();
    Demo();
    Demo();

    return 0;
}
