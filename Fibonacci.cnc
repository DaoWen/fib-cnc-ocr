// Fibonacci numbers

[ int fib: n ];

( fibStep: n )
 <- [ x @ fib: n - 2 ],
    [ y @ fib: n - 1 ]
 -> [ z @ fib: n     ];

( $init: n )
 -> [ fib: 0 ], [ fib: 1 ],
    ( fibStep: $rangeTo(2, n) );

( $finalize: n ) <- [ fib: n ];

