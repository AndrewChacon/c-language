// Chapter 1.1 - Getting Started

// first C program
// #include <stdio.h>

// int main() {
//     printf("hello, world\n");

//     printf("hello ");
//     printf("world");
//     printf("\n");
// }


// Chapter 1.2 - Variables and Arthimetic Expressions

// #include <stdio.h>

// int main() {
//     int fahr, celcius;
//     int upper, lower, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;
//     while (fahr <= upper) {
//         celcius = 5 * (fahr - 32) / 9;
//         printf("%d\t%d\n", fahr, celcius);
//         fahr = fahr + step;
//     }
// }

// Chapter 1.3 - The For Statement

#include <stdio.h>

int main() {
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}