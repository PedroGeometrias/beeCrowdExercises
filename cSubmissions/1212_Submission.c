// CODE BY pedroGeometrias
// ID -> 1212
#include <stdio.h>
#include <string.h>

int main(){
    char num1[11], num2[11];
    while(1){
        scanf("%s %s", num1, num2);
        if(strcmp(num1, "0") == 0 && strcmp(num2, "0") == 0){
            break;
        }
        int len1 = strlen(num1);
        int len2 = strlen(num2);
        int i = len1 - 1;
        int j = len2 - 1;
        int carry = 0;
        int carry_count = 0;
        while(i >= 0 || j >= 0){
            int d1 = (i >= 0) ? num1[i] - '0' : 0;
            int d2 = (j >= 0) ? num2[j] - '0' : 0;
            int sum = d1 + d2 + carry;
            if(sum >= 10){
                carry = 1;
                carry_count++;
            } else {
                carry = 0;
            }
            i--;
            j--;
        }
        if(carry_count == 0){
            printf("No carry operation.\n");
        } else if(carry_count == 1){
            printf("1 carry operation.\n");
        } else {
            printf("%d carry operations.\n", carry_count);
        }
    }
    return 0;
}


