#include "Fibonacci.h"

/**
 * Step function defintion for "fibStep"
 */
void fibStep(cncTag_t n, int x, int y, FibonacciCtx *ctx) {

    int *z = cncCreateItem_fib();
    *z = x + y;
    cncPut_fib(z, n, ctx);

}
