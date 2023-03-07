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

#include <stdio.h> // printf, scanf
#include <math.h> // sqrt

float number_input();
float func_input(float x, int *repeat);
float mult(float x);
float div(float x);
float root(float x);
float perc(float x);
float print_result(float x);

// * inputs
float number_input() {
    float input;
    printf("> ");
    scanf("%f", &input);
    return input;
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
    return sqrt(x);
}

float perc(float x) {
    return x / 100;
}

float print_result(float x) {
    printf("=%g\n",x);
    return x;
}

float clear() {
    return number_input();
}

float func_input(float x, int *repeat) {
    char input;
    printf("... ");
    scanf(" %c", &input);
    float result;
    switch(input) {
        case '+': 
            result = add(x); 
            break;
        case '-': 
            result = sub(x); 
            break;
        case '*': 
            result = mult(x); 
            break;
        case '/': 
            result = div(x); 
            break;
        case 'r': 
            result = root(x); 
            break;
        case '%': 
            result = perc(x); 
            break;
        case '=': 
            result = print_result(x); 
            break;
        case 'c':
            result = clear();
            break;
        case 'x':
            result = x;
            *repeat = 0;
            break;
        default: 
            printf("Oops! I was expecting a different input!\n");
            result = x;
        break;
    }
    return result;
}

int main() {
//     int name[100];
//     printf("CALCULATOR\n\nEnter your name:");
//     scanf("%[^\n]%*c", &name);
//     printf("Hello, %n", name);
    float x = number_input();
    int repeat = 1;
    while (repeat) {
        x = func_input(x, &repeat);
        // printf("%i", repeat);
    }
}
