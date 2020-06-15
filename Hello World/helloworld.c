#include <omp.h>
#include <stdio.h>

int main(int *argc, char *argv[])
{

// block to be executed in parallel
#pragma omp parallel
    {
        printf("Hello World\n");
    }

    return 0;
}