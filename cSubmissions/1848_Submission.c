// CODE BY pedroGeometrias
// ID -> 1848
#include <stdio.h>
#include <string.h>
int main() {
    char line[10];
    int sum = 0;
    int screams = 0;
    while (screams < 3) {
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = '\0';
        if (strcmp(line, "caw caw") == 0) {
            printf("%d\n", sum);
            sum = 0;
            screams++;
        } else {
            int value = 0;
            for (int i = 0; i < 3; i++) {
                value <<= 1;
                if (line[i] == '*') {
                    value |= 1;
                }
            }
            sum += value;
        }
    }
    return 0;
}

