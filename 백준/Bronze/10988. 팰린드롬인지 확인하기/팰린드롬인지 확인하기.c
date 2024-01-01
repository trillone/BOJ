#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int length=0;
    int print = 1;

    scanf("%s", input);
    for (int i = 0; input[i] != '\0'; i++)
        length++;

    for (int i = 0; i < length/2; i++) {
        if (input[i] != input[length - 1 - i]) {
            print = 0;
            break;
        }
    }

    printf("%d", print);
    return 0;
}