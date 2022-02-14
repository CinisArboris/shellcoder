/**
 * gcc -mpreferred-stack-boundary=2 -ggdb 04_buffer.c
 * @return
 */
 int main() {
    int array[5];
    int i;
    for (i = 0; i <= 255; i++) {
        array[i] = 10;
    }
}