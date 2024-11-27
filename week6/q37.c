#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    char result[500];
    int i = 0, j = 0;
    int sign = 1, ts = 1;

    printf("Enter the expression: ");
    scanf(" %[^\n]s", str);

    while (str[i] != '\0') {
        if (str[i] == '-') {
            sign = -sign;
            i++;
        } else if (str[i] == '+') {
            i++;
        } else if (str[i] == '(') {
            ts = sign;
            i++;
        } else if (str[i] == ')') {
            sign = ts;
            i++;
        } else {
            if (sign == -1 && (j == 0 || result[j - 1] != '-')) {
                result[j++] = '-';
            } else if (sign == 1 && (j == 0 || result[j - 1] != '+')) {
                result[j++] = '+';
            }
            result[j++] = str[i];
            sign = 1;
            i++;
        }
    }

    result[j] = '\0';

    if (result[0] == '+') {
        for (i = 0; result[i] != '\0'; i++) {
            result[i] = result[i + 1];
        }
    }

    printf("Simplified Expression: %s\n", result);

    return 0;
}

