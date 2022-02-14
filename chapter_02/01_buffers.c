#include <stdio.h>
#include <string.h>

/**
 * gcc -mpreferred-stack-boundary=2 -ggdb 04_buffer.c
 * @return
 */
int main() {
    int array[5] = {1, 2, 3, 4, 5};
    printf("%d\n", array[5]);
}