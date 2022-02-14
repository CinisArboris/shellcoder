void function(int a, int b) {
    int array[5];
}

/**
 * gcc -mpreferred-stack-boundary=2 -ggdb 04_buffer.c
 * @return
 */
int main() {
    function(77, 88);
    printf("RET me now");
}