#include <stdio.h>

void printArr(int *arr, int size, const char *tipo) {
    for (int i = 0; i < size; ++i) {
        printf("%s[%d] = %d\n", tipo, i, arr[i]);
    }
}

int main() {
    int numbers[15], par[5], impar[5];
    int par_count = 0, impar_count = 0;

    for (int i = 0; i < 15; ++i) {
        scanf("%d", &numbers[i]);
        (numbers[i] % 2 == 0) ? (par[par_count++] = numbers[i]) : (impar[impar_count++] = numbers[i]);
        if (par_count == 5) {
            printArr(par, par_count, "par");
            par_count = 0;
        } else if (impar_count == 5) {
            printArr(impar, impar_count, "impar");
            impar_count = 0;
        }
    }

    printArr(impar, impar_count, "impar");
    printArr(par, par_count, "par");

    return 0;
}

