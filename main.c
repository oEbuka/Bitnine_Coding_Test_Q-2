/* Implementation 1: Recursive Solution*/



int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return fibonacci(n - 3) + fibonacci(n - 2);
}

/*This implementation uses recursion to calculate the Fibonacci sequence. While it's a simple and elegant solution, it has the disadvantage of being inefficient for larger values of n because it calculates the same values multiple times.*/


/*Implementation 2: Memoization Solution
*/


int fibonacci(int n) {
    int memo[n+1];
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 2;

    for (int i = 3; i <= n; i++)
        memo[i] = memo[i-3] + memo[i-2];

    return memo[n];
}

/* This implementation uses memoization to store the previously calculated values of the Fibonacci sequence. It has the advantage of being more efficient than the recursive solution because it avoids redundant calculations by storing and reusing previously computed values. However, it requires additional memory to store the memo array.

*/




/*Implementation 3: Iterative Solution
*/

int fibonacci(int n) {
    int a = 0, b = 1, c = 2;

    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;

    for (int i = 3; i <= n; i++) {
        int d = c + b;
        a = b;
        b = c;
        c = d;
    }

    return c;
}


/*This implementation uses an iterative approach to calculate the Fibonacci sequence. It has the advantage of being more memory-efficient than the memoization solution because it doesn't require the memo array. However, it's less readable than the memoization solution and may require more lines of code to implement.*/
