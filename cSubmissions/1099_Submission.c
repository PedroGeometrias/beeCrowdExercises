#include <stdio.h>

int main(int argc, char *argv[]){
    int n, x, y;
    scanf("%d", &n);
    for (int i = 0;i<n ; ++i) {
        int sumOfOdds = 0;
        scanf("%d", &x);
        scanf("%d", &y);
        if(x < y){
            int temp = y;
            y = x;
            x = temp;
        }
        if(!(x - y == 0 || x - y == 1)){
            y++;
            while(y < x){
                if(y % 2 != 0){
                    sumOfOdds += y;
                }
                y++;
            }
            printf("%d\n", sumOfOdds);
            sumOfOdds = 0;
        }
        else{
            printf("%d\n", sumOfOdds);
        }

        }
    return 0;
}
