#include <stdio.h>

int main() {
    printf("Type your name: ");
    char name[50];
    scanf("%49s", name);
    printf("Hello %s\n", name);
}