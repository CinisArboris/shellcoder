/**
* Read user input into a buffer, and then, outputs the user input to stdout
*/

void buffer_01(void) {
    char array[1];
    gets(array);
    printf("%s\n", array);
}

void buffer_02(void) {
    char array[2];
    gets(array);
    printf("%s\n", array);
}

void buffer_03(void) {
    char array[3];
    gets(array);
    printf("%s\n", array);
}

void buffer_04(void) {
    char array[4];
    gets(array);
    printf("%s\n", array);
}

void buffer_05(void) {
    char array[5];
    gets(array);
    printf("%s\n", array);
}

void buffer_06(void) {
    char array[6];
    gets(array);
    printf("%s\n", array);
}
void buffer_07(void) {
    char array[7];
    gets(array);
    printf("%s\n", array);
}

void buffer_08(void) {
    char array[8];
    gets(array);
    printf("%s\n", array);
}

void buffer_09(void) {
    char array[9];
    gets(array);
    printf("%s\n", array);
}

/**
 * gcc -mpreferred-stack-boundary=2 -ggdb 04_buffer.c
 * @return
 */
int main() {
    buffer_01();
    buffer_02();
    buffer_03();
    buffer_04();
    buffer_05();
    buffer_06();
    buffer_07();
    buffer_08();
    return 0;
}