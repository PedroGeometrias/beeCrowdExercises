#include <stdio.h>

int main() {
    double score1, score2;
    int validScores = 0;
    double sum = 0.0;

    while (validScores < 2) {
        double score;
        scanf("%lf", &score);

        if (score < 0.0 || score > 10.0) {
            printf("nota invalida\n");
        } else {
            sum += score;
            validScores++;
        }
    }

    double average = sum / 2.0;
    printf("media = %.2lf\n", average);

    return 0;
}

