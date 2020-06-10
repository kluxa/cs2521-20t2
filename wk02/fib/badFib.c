
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

unsigned long long fib(int n);

int main(void) {
    for (int i = 1; i <= 60; i++) {
        printf("fib(%d) = %llu\n", i, fib(i));
    }
}

unsigned long long fib(int n) {
    assert(n > 0);
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}
