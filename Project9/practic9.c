#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int minSteps(int x, int y) {
    int steps = 0;

    while (y > x) {
        if (y % 2 == 0) {
            y = y / 2;
        }
        else {
            y = y + 1;
        }
        steps++;
    }

    steps += x - y;

    return steps;
}

int main() {
    int x, y;

    printf(" x: ");
    scanf("%d", &x);

    printf(" y: ");
    scanf("%d", &y);

    int result = minSteps(x, y);

    printf("Minimum number of steps: %d\n", result);

    return 0;
}