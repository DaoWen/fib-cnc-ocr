#include "Fibonacci.h"

int cncMain(int argc, char *argv[]) {
    CNC_REQUIRE(argc==2, "Usage: %s n\n", argv[0]);

    // Create a new graph context
    FibonacciCtx *context = Fibonacci_create();

    // Set up arguments for new graph instantiation
    FibonacciArgs args = { atoi(argv[1]) };

    // Launch the graph for execution
    Fibonacci_launch(&args, context);

    // Exit when the graph execution completes
    CNC_SHUTDOWN_ON_FINISH(context);

    return 0;
}
