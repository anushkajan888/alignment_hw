#include <stdio.h>
#pragma pack(1)

struct MyStruct {
    char a;
    int b;
    double c;
};

int main() {
    struct MyStruct s;

    printf("Size of struct MyStruct: %zu bytes\n", sizeof(s));

    printf("Address of a: %p\n", (void*)&s.a);
    printf("Address of b: %p\n", (void*)&s.b);
    printf("Address of c: %p\n", (void*)&s.c);

    return 0;
}

