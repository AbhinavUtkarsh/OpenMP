# Hello World

This is a very simple demonstration of a parallel hello world program. We use the compiler directive ***#pragma omp parallel*** to tell the compiler that the following block of code needs to be executes on multiple threads.

The command needed to run this program would be 

    $ gcc -fopenmp helloworld.c
    $ ./a.out

The output should look something like this:

    Hello World
    Hello World
    Hello World
    Hello World

Further more there are many ways to increase the number of threads from the default value. One of them being the environment variable ***OMP_NUM_THREADS***

You can try the same code out after executing the following command:

    $ export OMP_NUM_THREADS=5

The output would change to:

    Hello World
    Hello World
    Hello World
    Hello World
    Hello World
