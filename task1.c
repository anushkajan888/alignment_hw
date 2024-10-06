#include <stdio.h>

int main() {
    int intVar;
    char charVar;
    double doubleVar;
    short shortVar;

    // Printing sizes of each type
    printf("Size of int: %zu bytes\n", sizeof(intVar));
    printf("Size of char: %zu byte\n", sizeof(charVar));
    printf("Size of double: %zu bytes\n", sizeof(doubleVar));
    printf("Size of short: %zu bytes\n", sizeof(shortVar));

    // Printing addresses of each variable
    printf("Address of intVar: %p\n", (void*)&intVar);
    printf("Address of charVar: %p\n", (void*)&charVar);
    printf("Address of doubleVar: %p\n", (void*)&doubleVar);
    printf("Address of shortVar: %p\n", (void*)&shortVar);

    return 0;
}

