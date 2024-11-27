#include <stdio.h>

int main() {
    char str[100];
    int t[200] = {0}; 
    int i, l = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str); 
    while (str[l] != '\0') {
        t[str[l]]++;
        l++;
    }

    for (i = 0; i < l; i++) {
        if (t[str[i]] == 1) {
            printf("The first non-repeated character is: %c\n", str[i]);
            return 0;
        }
    }
    printf("No non-repeated character found in the string.\n");
    return 0;
}

