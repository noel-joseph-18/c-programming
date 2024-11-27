#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    char t;

    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] > str[j]) {

                t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }
    printf("Sorted string: %s\n", str);

    return 0;
}

