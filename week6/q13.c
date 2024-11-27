#include <stdio.h>
#include <string.h>
int main() {
    char str[500], w[10];
    int i, j, k, c = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; 
        }
    }
    i = 0;
    while (str[i] != '\0') {
        j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            w[j++] = str[i++];
        }
        w[j] = '\0'; if (strcmp(w, "the") == 0) {
            c++;
        }
        while (str[i] == ' ') {
            i++;
        }
    }
    printf("Frequency of 'the': %d\n", c);

    return 0;
}

