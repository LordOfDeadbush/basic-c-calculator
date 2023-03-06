#include <stdio.h>
int main() {
    int name[100];
    printf("CALCULATOR\n\nEnter your name:");
    scanf("%[^\n]%*c", &name);
    printf("Hello, %s", name);
}
