
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void countdownWhile(void);
void countdownFor(void);

int main(void) {
    countdownWhile();
    countdownFor();
}

void countdownWhile(void) {
    int i = 10;
    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }
    printf("Liftoff!\n");
}

void countdownFor(void) {
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }
    printf("Liftoff!\n");
}
