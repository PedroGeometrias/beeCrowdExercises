#include <stdio.h>
#include <string.h>

int main() {
    char year[1100];
    int first = 1;
    while (scanf("%s", year) != EOF) {
        int mod4 = 0, mod100 = 0, mod400 = 0, mod15 = 0, mod55 = 0;
        for (int i = 0; year[i]; i++) {
            int digit = year[i] - '0';
            mod4 = (mod4 * 10 + digit) % 4;
            mod100 = (mod100 * 10 + digit) % 100;
            mod400 = (mod400 * 10 + digit) % 400;
            mod15 = (mod15 * 10 + digit) % 15;
            mod55 = (mod55 * 10 + digit) % 55;
        }
        int result = 0;
        if ((mod4 == 0 && mod100 != 0) || (mod400 == 0)) {
            result |= (1 << 0);
        }
        if (mod15 == 0) {
            result |= (1 << 1);
        }
        if ((result & (1 << 0)) && mod55 == 0) {
            result |= (1 << 2);
        }
        if (!first) {
            printf("\n");
        }
        first = 0;
        if (result & (1 << 0)) {
            printf("This is leap year.\n");
        }
        if (result & (1 << 1)) {
            printf("This is huluculu festival year.\n");
        }
        if (result & (1 << 2)) {
            printf("This is bulukulu festival year.\n");
        }
        if (result == 0) {
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}

