/*

template calculator: https://www.amazon.com/Texas-Instruments-TI-108-Elementary/dp/B001F0271O

4 Function Calculator:

! number input
Has Number inputs: 
0123456789

Has decimal and negative numbers

! operations
Has 4 basic operations
+ - * /

has sqrt

has % (divide by 100)

has = (display result)

! other operations
Has memory management (M) <- do this later



? NOTE: this will not follow PEMDAS rules
*/

#include <stdio.h>

// * inputs
float number_input() {
    float input;
    printf(">");
    scanf("%f", &input);
    return input;
}

float func_input() { // TODO: this is the last part for this part of the project
    return 0;
}

// * basic operations
float add(float x) {
    float y = number_input();
    return x + y;
}

float sub(float x) {
    float y = number_input();
    return x - y;
}

float mult(float x) {
    float y = number_input();
    return x * y;
}

float div(float x) {
    float y = number_input();
    return x / y;
}

// * other operations
// ? these operations only take the x parameter, so y is not required

float root(float x) {
    return x;
}

float perc(float x) {
    return x / 100;
}

float print_result(float x) {
    printf("=%g",x);
    return x;
}

int main() {
//     int name[100];
//     printf("CALCULATOR\n\nEnter your name:");
//     scanf("%[^\n]%*c", &name);
//     printf("Hello, %n", name);
    print_result(number_input());
}
