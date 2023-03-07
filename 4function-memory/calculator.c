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

const char* instructions = "INSTRUCTIONS:\nif >, enter number (can use e+)\nIf ..., use an operator: \n+ - * / %% = m\nx to exit\n";


// * inputs
float number_input(float m) {
    float input;
    char use_memory;
    printf("  > ");
    scanf("%f%c", &input, &use_memory);
    if (use_memory == 'm') {
        return m;
    }
    return input;
}

// * basic operations
float add(float x, float m) {
    float y = number_input(m);
    return x + y;
}

float sub(float x, float m) {
    float y = number_input(m);
    return x - y;
}

float mult(float x, float m) {
    float y = number_input(m);
    return x * y;
}

float div(float x, float m) {
    float y = number_input(m);
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
    printf("  = %g\n",x);
    return x;
}

float clear(float m) {
    return number_input(m);
}

float set_memory(float x, float *m) {
    *m = x;
    printf("%f",*m);
    return x;
}

void func_input() {
    char input;
    float result;
    float m;
    float x = number_input(m);
    while (1) {        printf("... ");
        scanf(" %c", &input);
        switch(input) {
            case '+': 
                result = add(x, m); 
                break;
            case '-': 
                result = sub(x, m); 
                break;
            case '*': 
                result = mult(x, m); 
                break;
            case '/': 
                result = div(x, m); 
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
                result = clear(m);
                break;
            case 'x':
                result = x;
                return;
            case 'm':
                result = set_memory(x, &m);
                break;
            default: 
                printf("Oops! I was expecting a different input!\n");
                result = x;
            break;
        }
        x = result;
    }
}

int main() {
    printf(instructions);
    func_input();
}
