#include <stdio.h>

int main() {
    // Character data
    char ch = 'A';
    printf("Printing character data: %c\n", ch);

    // Decimal / Integer data
    int x = 45, y = 90;
    printf("Printing decimal data: %d\n", x);
    printf("Printing integer data: %i\n", y);

    // Float
    float f = 12.67;
    printf("Printing floating point data: %f\n", f);

    // Scientific notation
    printf("Print in scientific notation: %e\n", f);

    // Octal
    int a = 67;
    printf("Printing data in octal format: %o\n", a);

    // Hexadecimal
    printf("Printing data in hex format: %x\n", a);

    // Another float
    float z = 3.8;
    printf("Float value of z: %g\n", z);
    printf("Address of z in hexadecimal: %p\n", &z);

    // String
    char str[] = "Hello World";
    printf("%s\n", str);
    printf("Right-aligned 20 characters: %20s\n", str);

    return 0;
}