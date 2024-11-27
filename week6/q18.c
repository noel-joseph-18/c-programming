#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    char t;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    int n = strlen(str);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                t = str[j];
                str[j] = str[j + 1];
                str[j + 1] = t;
            }
        }
    }
    printf("Sorted string: %s\n", str);
    return 0;
}

