#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        printf("The difference between the maximum and minimum digit frequency is: 0\n");
        return 0;
    }

    int digit_count[10] = {0};

    while (n != 0) {
        int rem = n % 10;
        digit_count[rem]++;
        n = n / 10;
    }

    int max_freq = 0, min_freq = 100000;
    for (int i = 0; i < 10; i++) {
        if (digit_count[i] > max_freq) {
            max_freq = digit_count[i];
        }
        if (digit_count[i] > 0 && digit_count[i] < min_freq) {
            min_freq = digit_count[i];
        }
    }

    int difference = max_freq - min_freq;
    printf("The difference between the maximum and minimum digit frequency is: %d\n", difference);

    return 0;
}