
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
    unsigned long long prevFib = 0;
    unsigned long long currFib = 1;
    int i = 1;
    while (i < n) {
        currFib = currFib + prevFib;
        prevFib = currFib - prevFib;
        i++;
    }
    return currFib;
}
