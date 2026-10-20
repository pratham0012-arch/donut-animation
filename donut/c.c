#include <stdio.h>

int main() {
    float locker1, locker2;

    // Input the money in both lockers
    printf("Enter money in Locker 1: ");
    scanf("%f", &locker1);
    printf("Enter money in Locker 2: ");
    scanf("%f", &locker2);

    locker1 = locker1 + locker2;
    locker2 = locker1 - locker2;
    locker1 = locker1 - locker2;

    printf("\nAfter swap:\n");
    printf("Locker 1 = %.2f\n", locker1);
    printf("Locker 2 = %.2f\n", locker2);

    return 0;
}