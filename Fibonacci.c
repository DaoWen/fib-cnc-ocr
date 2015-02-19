#include "Fibonacci.h"


void Fibonacci_init(FibonacciArgs *args, FibonacciCtx *ctx) {

    cncTag_t n = args->n;

    // Put Fib(0)
    int *fib0 = cncCreateItem_fib();
    *fib0 = 0;
    cncPut_fib(fib0, 0, ctx);

    // Put Fib(1)
    int *fib1 = cncCreateItem_fib();
    *fib1 = 1;
    cncPut_fib(fib1, 1, ctx);

    { // Compute Fib(2) thru Fib(n)
        s64 _n;
        for (_n = 2; _n <= n; _n++) {
            cncPrescribe_fibStep(_n, ctx);
        }
    }

    // Set finalizer function's tag
    Fibonacci_await(n, ctx);

}


void Fibonacci_finalize(cncTag_t n, int fib, FibonacciCtx *ctx) {

    PRINTF("Fib(%ld) = %ld\n", (long)n, (long)fib);

}

